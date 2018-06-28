/*Type your code here!*/#include<iostream>
using namespace std;
int main()
{
    int t;
    long long n,x,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x;
        ans=n%x;
        if(ans==0)
        cout<<x<<endl
        else
        cout<<ans<<endl;
    }
    return 0;
}