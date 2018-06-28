/*Type your code here!*/#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
long long int s=0,x1,x2;
cin>>x1>>x2;
if(x1>x2)
{
int temp;
temp=x1;
x1=x2;
x2=temp;
}
for(int j=x1;j<=x2;j++)
{
for(int z=2;z<j;z++)
{
if(j%z==0)
{
s++;


}
break;
}}
cout<<(x1-x2)-s;
}
return 0; 
}
