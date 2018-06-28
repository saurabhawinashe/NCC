/*Type your code here!*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i,j,k;
    for(i=0;i<t;i++)
    {    
        int n;
    scanf("%d", &n);
    char stri[n];
    char h[n];
        for(j=0 k=n-2;j<n-1 k>=0;j++ k--)
        {
            h[k]=stri[j];
        printf("%c", h[k]);    
            
        }
    }
return 0;
    
}