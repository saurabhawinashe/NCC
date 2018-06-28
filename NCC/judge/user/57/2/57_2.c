#include<stdio.h>

int main()
{
    struct test T[1000]
    int i,j,S,k,l,temp[1000],m;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
         scanf("%d",&S);

        for(j=0;j<S;j++)
        {
            scanf("%d",&temp[j]);
        }
        for(k=0;k<S;k++)
        {
            if(temp[i]>temp[(i+1)])
            {
                m=temp[i];
                temp[i]=temp[i+1];
                temp[i+1]=m;
            }
        }
         for(k=S;k>0;k--)
        {
            if(temp[i]>temp[(i-1)])
            {
                m=temp[i];
                temp[i]=temp[i-1];
                temp[i-1]=m;
            }
            for(l=0;l<3;l++)
            {
                printf("%d",temp[l]);
            }
        }

    }
    return 0;
}
pe your code here!*/