/*Type your code here!*/#include<iostream>
using namespace std;

int main()
{
int x1,x2,i,j,t,count=0,flag=0;
cin>>x1>>x2;
for(i>=x1;i<=x2;i++)
{
for(j=1;j<=i;j++)
{
t=i%j;
if(t==0)
{
count++;
}
if(count==2)
{
flag++;
}
}
}
cout<<flag<<endl;
return 0;
}