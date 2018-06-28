/*
Some balls are to be put into crates, and crates put into ships. A ship can have k crates if there exists a ship with k-1 crates, and a crate can have p balls if there exists a crate with p-1 balls in the same ship.
No ship can have 0 crates and no crate can have 0 balls.
Number of ships N is given to you, you can use as many crates as permitted.
What is the maximum number of balls you can store.
1<=N<=10^9
*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MOD 1000000007
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
        ll sum=0;
        for(ll i=1;i<=n;i++){
            sum=(sum%MOD+(i*(i+1)/2)%MOD)%MOD;
        }
        cout<<sum<<"\n";
    }
}
