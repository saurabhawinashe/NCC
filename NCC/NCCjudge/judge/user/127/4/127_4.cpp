/*Type your code here!*/
/*Given a Number N, print either a "YES", or a "NO" without quotes, specifyng whether it is possible to represent N as a sum of 2 prime numbers.
1<=N<=10^12
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
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
			cout<<"YES\n";
		}else{
			n=n-2;
			ll flag=0;
			for(ll i=3;i<=sqrt(n);i+=2){
				if(n%i==0){
					flag=1;
					break;
				}
			}
			if(flag==1){
				cout<<"NO\n";
			}else cout<<"YES\n";
		}
	}
}