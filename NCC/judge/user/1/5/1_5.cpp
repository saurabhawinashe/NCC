#include<bits/stdc++.h>
#define ll long long
#define v vector
#define vi vector<ll>
#define f(a,i,n) for(int i=a;i<n;i++)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(x) x.begin(),x.end()
//#define cin fin
using namespace std;

int main()
{
	ll t;
	//ifstream fin("input4.txt");
	//ofstream fout("output4.txt");
	cin>>t;
	while(t--)
	{
		ll n,k1,k2,k3;
		cin>>n>>k1>>k2>>k3;
//		if(n<k1+k2+k3) {cout<<"Wrecked\n";return 0;}
		ll t1=n-k1-k2-k3+1;
		ll t2=n-k1-k2-k3+2;
		if(t1%2==0) t1/=2;
		if(t2%2==0) t2/=2;
		cout<<((t1%mod)*(t2%mod))%mod<<"/n";
	}
}
