
#include<stdio.h>

void main()
{int i;
	int a;

	int p[100000];
	int q[100000];
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		scanf("%d",&p[i]);
		scanf("%d",&q[i]);

	}
	for(i=0;i<a;i++)
		{int b=p[i];
		int c=q[i];
		int ans=b%c;
			printf("%d",ans);

		}
}
