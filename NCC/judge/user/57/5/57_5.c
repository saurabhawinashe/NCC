/*Type your code here!*/
#include<stdio.h>
int main()
{
    int T,x1,x2,i,j,k,count=0;
    if(T>=1 && T<=10)
    scanf("%d",&T);
    for(i=0;i<=T,i++)
{
    scanf("%d%d",&x1,&x2);
       if(x1>=1 && x2>=x1 && x2<=1000000)
       {
           for(j=x1;j<=x2;j++)
           {
               for(k=0;k<=j;k++)
               {
                   if(j%k==0&&j%1==0&&j!=k)
                   {
                       count++;
                   }
                   
               }
           }
       }
       
        
       }
       return 0;
}