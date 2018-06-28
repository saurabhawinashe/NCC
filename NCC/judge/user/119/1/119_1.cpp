/*
First line contains T
For a given N, print the Nth smallest odd length palindrome consisting of lowercase alphabets.
1) A string of length L comes before a string of length L+2
2) Nth palindromes are sorted lexicographically

Sample:
5
1
2
26
27
28
702
703

a
b
z
aaa
aba
zzz
aaaaa
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

//https://www.youtube.com/watch?v=4AqjqOqNrjw

ll fpow(ll x,ll y,ll p=MOD){
    ll res=1;
    x=x%p;
    while(y>0){
    if(y&1){
        y--;
        res*=x;
        res=res%p;
    }
    x=x*x;
    x=x%p;
    y>>=1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<=26){
            cout<<(char)(n+96)<<"\n";
            continue;
        }
        ll m=n;
        ll q=26;
        ll len;
        for(len=1;;len++){
            m=m-q;
            if(m<=0){
                m=m+q;
                break;
            }
            q=q*26;
        }
        ll p;
        p=fpow(26,len-1);
//        cout<<m<<" "<<p<<"\n";
        vector<char>ans;
        while(p){
            ll ch=m/p;
            if(m%26==0 && ch!=0){
                ch--;
            }
            ans.pb(ch%26+97);
            if(p!=1)
                p=p/26;
            if(p==1){
                ch=m%26;
                if(ch==0){
                    ch=26;
                }
                ans.pb(ch+96);
                p=0;
            }
        }
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        for(ll i=ans.size()-2;i>=0;i--){
            cout<<ans[i];
        }
        cout<<"\n";
    }
}