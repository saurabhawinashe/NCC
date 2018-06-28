/*Type your code here!*/#include<stdio.h>
#include<math.h>
int main()
{
  long int i,x,m,t;
  int j,left=0,d;
  scanf("%d",&t);
if(t>=1 && t<=100000 && m>=1 && m<=pow(10,9))
for(i=0;i<t;i++)
  {scanf("%ld%ld",&m,&x);
  left=m%x;
  printf("%d\n",left);}
return 0;
}
