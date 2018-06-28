/*Type your code here!*/
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
bool prime[1000001];
void SieveOfEratosthenes(ll n)
{
    
       
    memset(prime, true, sizeof(prime));
 //	prime[1]=false;
    for (int p=2; p*p<=n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
   
}
int main(){
	SieveOfEratosthenes(1000001);
 	ll t;
	cin>>t;
	while(t--){
			ll x1,x2;
			cin>>x1>>x2;
			ll ans=0;			
			for(ll i=x1;i<=x2;i++){
				if(prime[i]) ans++;				
			}		
	cout<<ans<<"\n";
		}
}
