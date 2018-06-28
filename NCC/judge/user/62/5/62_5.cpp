#include<iostream>
using namespace std;
int main()
{
int t,i,j,k,l;
double x1,x2;
int count=0;
cin>>t;
for(i=0;i<t;i++)
{
cin>>x1;
cin>>x2;
for(j=x1;j<=x2;j++)
{
for(i=2;i<x1;i++)
{
k=j%i;
if(k==0)
{
count++;
break;

}
}

l=(x2+1)-(x1-1)-count-1;
}

cout<<l;

}
return 0;
}


