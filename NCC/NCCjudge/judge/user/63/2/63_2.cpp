/*Type your code here!*/#include<iostream>
using namespace std;
int main()
{
int t,temp[5],i,n,j;
cin>>t;
for(i=1;i<=t;i++)
{
cin>>n;
for(i=1;i<=n;i++)
{
cin>>temp[i];
}
}
for(j=1;j<=5;j++)
{
if(temp[j+1]<temp[j])
{temp[j]=temp[j+1];
}
}
for(j=5;j>=1;j--)
{
cout<<temp[j]<<temp[j-1]<<temp[j-2]<<endl;
}
return 0;
}