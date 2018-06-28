#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		ll n;
		cin>>n;
		cin>>s;
		ll flag=0,flag1=0,m=s[0],len=s.length();
		for(ll i=0;i<=len/2;i++){
			if(m!=s[i]){
				flag1=1;
			}
			if(s[i]!=s[len-i-1]){
				flag=1;
				break;
			}
		}
		if(flag==0 && flag1==1){
			cout<<1<<"\n";
		}else if(flag==0){
			cout<<len<<"\n";
		}else{
			cout<<len<<"\n";
		}
	}
}