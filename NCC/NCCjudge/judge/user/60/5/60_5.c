/*Type your code here!*/#include<stdio.h>
int main()
{
int t;
scanf("%d", &t);
int x1, x2;
int i,j,k;
for(k=0;k<t;k++)
{
int flag=0;
scanf("%d %d", &x1, &x2);
for(i=x1;i<=x2;i++)
{
for(j=2; j<=i/2; j++)
{
if(i%j==0){
flag++;
break;
}
}

}
printf("%d\n", x2-x1+1-flag);
}
return 0;
}