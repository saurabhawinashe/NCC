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

//https://www.youtube.com/watch?v=4AqjqOqNrjw

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll m=n;
        ll q=26;
        ll len;
        for(len=1;;len++){
            n=n-q;
            if(n<=0){
                break;
            }
            q=q*26;
        }
        vector<char>ans;
        ll p=0;
        ll flag=0;
        for(ll i=0;i<26;i++){
            ll u;
            if(i==0){
                u=0;
            }else u=1;
            while(u<2){
                for(ll j=0;j<26;j++){
                    ll o;
                    if(j==0 && u==0){
                        o=0;
                    }else o=1;
                    while(o<2){
                        for(ll k=0;k<26;k++){
                            p++;
                            if(p==m){
                                cout<<(char)(i+97)<<(char)(j+97)<<(char)(k+97)<<(char)(j+97)<<(char)(i+97)<<"\n";
                                flag=1;
                                break;
                            }
                        }
                        if(flag==1){
                            break;
                        }
                        o++;
                    }
                    if(flag==1){
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
                u++;
            }
            if(flag==1){
                break;
            }
        }
    }
}
