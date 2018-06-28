/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,ans;
    cin>>t;
    while(t--)
    {
       cin>>a>>b;
       ans=a%b;
       if(ans==0)
       {
           cout<<b<<endl;
       }
       else
       {
           cout<<a%b<<endl;
       }
    }
    return 0;
}