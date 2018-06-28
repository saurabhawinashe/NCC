/*Type your code here!*/#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MOD 1e9+7
#define gc getchar_unlocked
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed<<setprecision(n)
using namespace std;
typedef long long ll;

ll mult(ll a, ll b, ll p = MOD) {return (ll) a * b % p;}

//https://www.youtube.com/watch?v=4AqjqOqNrjw

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll n1=n+1;
        ll n2=n+2;
        if(n%2==0){
            n=n/2;
        }else n1=n1/2;
        if(n%3==0){
            n=n/3;
        }else if(n1%3==0){
            n1=n1/3;
        }else n2=n2/3;
        cout<<mult(mult(n,n1),n2)<<"\n";
    }
}