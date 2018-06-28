#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll modpow(ll base, ll exp, ll modulus) {
    base %= modulus;
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}
int main(){
    ll n,ans;
    cin>>n;
    ans=1;
    for(int i=0;i<n;i++){
      ans=(2*(ans%mod))%mod;
    }
    cout<<ans;
    return 0;
}