#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int x;
    int i;
    for(i=0;i<t;i++)
    {
        
        scanf("%d %d", &n, &x);
        if(n%x!=0){
        printf("%d\n", n%x);}
        else
        printf("%d", x);
        
    }
        
    return 0;
}