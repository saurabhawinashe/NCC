/*Type your code here*/
#include<iostream>
using namespace std;

int main()
{
 int cases,N,X,remain,i,j,tot;
 
 cin>>cases;
 for(int i=0;i<cases;i++)
   {
      cin>>N>>X;
      
      for(int n=1;n<N;n++)
     { 
      tot=X*n;
      if(tot<N)
      
      
      
   remain=N-tot;   
     }  
    cout<<remain<<endl;
      
 }
 return 0;
 }