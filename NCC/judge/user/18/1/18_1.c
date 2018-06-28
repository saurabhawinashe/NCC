#include<stdio.h>
int main(){
    int a,b,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if(a%b==0)
        printf("%d\n",b);
        else
        printf("%d\n",a%b);
    }
    return 0;
}