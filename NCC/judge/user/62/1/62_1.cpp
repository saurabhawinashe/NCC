#include<iostream>
using namespace std;
int main()
{
double t;
int i,moneyleft;
long n,x;
cin>>t;
for(i=0;i<t;i++)
{
cin>>n>>x;
moneyleft=n%x;
if(moneyleft==0)
{
moneyleft=moneyleft+x;
}
cout<<moneyleft<<"\n";
}
return 0;
}

