/*Type your code here!*/
/*Given a Number N, print either a "YES", or a "NO" without quotes, specifyng whether it is possible to represent N as a sum of 2 prime numbers.
1<=N<=10^12
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
vector<ll>prime;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	prime.pb(2);
	prime.pb(3);
	for(ll i=5;i<=1000000;i+=2){
		ll flag=0;
		for(ll j=3;j*j<=i;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			prime.pb(i);
		}
	}
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==2 || n==3){
			cout<<"NO\n";
			continue;
		}
		if(n%2==0){
			ll flag=0;
			for(ll i=0;i<prime.size();i++){
				ll l=i,r=prime.size()-1;
				ll key=n-prime[l];
				if(key<2){
					break;
				}
				while(l<=r){
					ll mid=(l+r)/2;
					if(prime[mid]==key){
						flag=1;
						break;
					}else if(prime[mid]<key){
						l=mid+1;
					}else r=mid-1;
				}
				if(flag==1){
					cout<<"YES\n";
					break;
				}
			}
			if(flag==0){
				cout<<"NO\n";
			}
		}else{
			ll l=0,r=prime.size()-1;
			ll key=n-2;
			ll flag=0;
			while(l<=r){
				ll mid=(l+r)/2;
				if(prime[mid]==key){
					flag=1;
					break;
				}else if(prime[mid]<key){
					l=mid+1;
				}else r=mid-1;
			}
			if(flag==1){
				cout<<"YES\n";
			}else cout<<"NO\n";
		}
	}
}