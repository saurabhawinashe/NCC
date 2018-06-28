/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
  long int t,i,j,k,a[10000],temp,n;
cin>>t;
for(i=0;i<t;i++)
{
 cin>>n;
for(j=0;j<n;j++)
{
 cin>>a[j];
}
for(j=0;j<n;j++)
 {
 for(k=0;k<n;k++)
 {
  if(a[j]>a[k])
  {
  temp=a[j];
  a[j]=a[k];
  a[k]=temp;
  }
 }
 }
for(j=0;j<3;j++)
{
 cout<<a[j]<<" ";
}
cout<<endl;
}
return 0;
}