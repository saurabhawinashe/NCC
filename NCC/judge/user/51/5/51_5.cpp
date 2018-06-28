/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
    int t,x1,x2,c1=0,c2=0,c3=0,c4=0;
    cin>>t;
for(int k=0;k<t;k++)
{
    cout<<"\n";
    cin>>x1>>x2;


   for(int i=2;i<x1;i++)
   {
c1=0;
       for(int j=1;j<i;j++)
       {
           if(i%j==0)
           c1++;
           
       }
       if(c1==1)
       c2++;
   }
   for(int i=2;i<=x2;i++)
   {
c3=0;
       for(int j=1;j<i;j++)
       {
           if(i%j==0)
           c3++;
           
       }
       if(c3==1)
       c4++;
   }

   cout<<c4-c2<<"\n";
}
   return 0;
}