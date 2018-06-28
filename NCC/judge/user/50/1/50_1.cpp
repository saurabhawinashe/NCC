/*Type your code here!*/#include<iostream>
using namespace std;

int main()
{
long long N[100000],X[100000],d[100000],e[100000],i,T;
cin>>T;
for(i=1;i<=T;i++)
{
cin>>N[i]>>X[i];
e[i]=N[i]/X[i];
if(e[i]!=0)
{
d[i]=N[i]%X[i];
}
}
for(i=1;i<=T;i++)
{
cout<<d[i]<<endl;
}
return 0;
}