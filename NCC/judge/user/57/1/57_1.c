/*Type your/*Type your code here!*/

#include<stdio.h>
int main()
{
    int T,N[1000],X[1000],i;
    scanf("%d",&T);
    step1:
    if(T<=100000&&T>=1)
    {
    for(i=0;i<T;i++)
    {
        scanf("%d%d",&N[i],&X[i]);
    }
    for(i=0;i<T;i++)
    {
       N[i]=N[i]%X[i];
       printf("%d\n",N[i]);
    }
}
    else{
        goto step1;
    }
    return 0;
}
