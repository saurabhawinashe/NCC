#include<iostream>
using namespace std;
int  main()
 {
int n,i,j,s,k=0,a=0,b=0;
cin>>n;
for(s=1;s<=n;s++)
{
cin>>k;
int ar[k];ar[0]=0;
for(j=0;j<k;j++)
{
cin>>ar[j];
}
for(a=0;a<k;a++)
{
for(b=0;b<k-1;b++)
{
if(ar[b]<ar[b+1])
{
int temp=ar[b];
ar[b]=ar[b+1];
ar[b+1]=temp;
}
}
}
for(a=0;a<3;a++)
{
cout<<ar[a]<<" ";
}
cout<<"\n";
}return 0;
}