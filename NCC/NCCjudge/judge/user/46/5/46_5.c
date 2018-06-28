#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1[20], x2[20], T, i, j,k, count[20];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        count[i]=0;
    }
    for(i=0;i<T;i++)
    {
        scanf("%d%d",&x1[i],&x2[i]);
    }
    for(i=0;i<T;i++)
    {
        for(j=x1[i];j<=x2[i];j++)
        {
            for(k=2;k<j/2;k++)
            {
                if(j%k==0)
                {
                    goto abc;
                }
            }
            count[i]++;
            abc:;
        }
	printf("%d\n", count[i]);    
	}
    return 0;
}