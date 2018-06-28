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
    ll n;
    cin>>n;
    cout<<modpow(2,n,mod);
    return 0;
}