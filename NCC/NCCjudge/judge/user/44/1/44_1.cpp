/*Type your code here!*/
#include<iostream>
using namespace std;
int  main()
 {
     long long n,k=0,rs,no,p;
     cin>>n;
     do {
         cin>>rs>>no;
         p=rs%no;
       
         if(p==0)
          {p=no;}
            cout<<p<<"\n";
         k++;
        }while(k!=n);
return 0; 
}