/*Type your code here!*/#include<iostream>
using namespace std;

int main()

{
 int cases,number,x1,x2,count;
 
 cin>>cases;

 
 for(int i=0;i<cases;i++)
 { 
  cin>>x1;
  cin>>x2;
  count=(x1-x2)+1;
 
  for(int j=x1;j<=x2;j++)
 {
    for(int n=2;n<=j;n++)
    {
        
        if(j%n==0)
        count++;
      break;
    }
    
 }
 cout<<count<<endl;
}
return 0 ;
}
