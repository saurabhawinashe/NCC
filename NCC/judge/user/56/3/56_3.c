#include<stdio.h>


void main()
{int i;
int a;
int b;
scanf("%d",&a);
char str1[100000];
for(i=0;i<a;i++)
{
	scanf("%d",&b);
	scanf("%s",str1[i]);

}
for(i=0;i<a;i++)
{
	printf("%d",(b/2));
}
}
