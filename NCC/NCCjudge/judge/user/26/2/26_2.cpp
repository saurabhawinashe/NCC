#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,a[100003];
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(a[j]>a[j+1]){
                    ll temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        cout<<a[n-1]<<" "<<a[n-2]<<" "<<a[n-3]<<"\n";
    }
}