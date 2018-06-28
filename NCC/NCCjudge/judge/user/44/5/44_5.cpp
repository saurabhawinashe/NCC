/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
  int x1,x2,j,n,k=0,count=0,a=0,cnt=0,s=0;
  cin>>n;
  do
{
count=0;
cin>>x1>>x2;
for(j=x1;j<=x2;j++)
{
s=j;
cnt=0;
for(a=2;a<=(s/2);a++)
{
if((s%a)==0)
{
cnt++;
}
}
if(cnt==0)
{
count++;
}
}
cout<<count;
k++;
cout<<"\n";
}while(k!=n);
}
