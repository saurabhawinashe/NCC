/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n%x==0)
        {
            cout<<x;
        }
        else
        cout<<n%x;
    }
    return 0;
}