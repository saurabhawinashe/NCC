/*Type your code here!*/
#include<iostream>
using namespace std;
int  main()
{
    int t;
     for(int i=0;i<t;i++)
     {
         int a[5]={50000,12222,70000,10,0}
         for(int m=0;m<5;m++)
         {
             for(int j=0;j<m;j++)
             {
                 if(a[m]>a[j])
                 {
                     int temp;
                     a[m]=temp;
                     temp=a[j];
                     a[j]=a[m];
                 }
             }
         }
         for(int p=0;p<5;p++)
         {
             cout<<a[i]<<endl;
         }
         
     }
     
}