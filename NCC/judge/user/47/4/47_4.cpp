/*Type your code here!*/#include<iostream>
using namespace std;
int main()
{
long long int m,c=1,n,i;
cin>>n;

for(i=0;i<n;i++)
{
m=1000000007;
c=((c%m)*(2%m))%m;
}


cout<<c;
return 0;
}
