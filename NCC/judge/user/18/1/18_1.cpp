#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0)
        printf("%d",b);
        else
        printf("%d",a%b);
    }
    return 0;
}