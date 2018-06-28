/*Type your code here!*/#include<stdio.h>
int main()
{
  long int x,y;
  int t,i,j,a,k,count=0;
  scanf("%d",&t);
  if(t>=1 && t<=10)
  {for(a=0;a<t;a++)
   {scanf("%ld%ld",&x,&y);
count=0;
     if(x>=1 && x<=y && y>=1 && y<=1000000)
     for(i=x;i<=y;i++)
      { k=0;
        for(j=1;j<=i;j++)
          {
            if(i%j==0)
             {
                k++;
             }
           
            
           }
if(k==2)
count++;

       }
printf("%d\n",count);
 
   }

}
return 0;
}