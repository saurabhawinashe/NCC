#include<stdio.h>
main()
{
    int n[100];
    int x[100];
    int i;
    int t;
    int j;
    
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
	scanf("%d",&x[i]);
    }

    for(i=0;i<t;i++)
    {
	if(n[i]==0)
	{
	printf("%d\n",n[i]);
	}
	else if(x[i]==0)
	{
	printf("%d\n",n[i]);
	}
	else if(n[i]<=x[i])
	{
	printf("%d\n",n[i]);
	}
	else if(n[i]==x[i])
{
	printf("%d\n",n[i]);
}

	else
	{
        j=n[i]%x[i];
		
	        
        printf("%d\n",j);
	}
    }
}
    
