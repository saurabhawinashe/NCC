/*Type your code here!*/#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max_size 1000001
#define pb push_back
bool prime[1000003];

void SieveOfEratosthenes()
{
    for (ll p=2; p*p<=1000003; p++)
    {
        if (prime[p] == 0)
        {
            for (ll i=p*2; i<=1000003; i += p)
                prime[i] = 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SieveOfEratosthenes();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        bool flag=0;
        if(n==2 || n==3){
            cout<<"NO\n";
            continue;
        }
        if(n%2==1){
            if(prime[n-2]==0){
                cout<<"YES\n";
            }else cout<<"NO\n";
            continue;
        }
        for(ll i=2;;i++)
        {
            if(prime[i]==0){
                ll temp=n-i;
                if(temp<2){
                    break;
                }
                if(prime[temp]==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
}