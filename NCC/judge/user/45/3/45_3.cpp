/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
 char a[10000];
 int i,t,j,k,cnt,n;
 cin>>t;
 for(i=0;i<t;i++)
{
 cnt=0;
 cin>>n;
 for(j=0;j<n;j++)
 {
 cin>>a[j];
 }
 for(j=0;j<n;j++)
 {
  for(k=j+1;k<n;k++)
  {
   if(a[j]==a[k])
   {
   cnt++;
   }
  }
 }
cout<<cnt;
}
return 0;
}