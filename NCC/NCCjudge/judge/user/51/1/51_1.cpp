#include<iostream>
using namespace std;
int main()
{
    int T,X,N;
    
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N>>X;
       
   
        if(N%X==0)
cout<<N-X*(N/X-1);
        else
        cout<<N%X;
        
        cout<<"\n";
    }
    return 0;
}