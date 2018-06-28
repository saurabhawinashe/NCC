/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
    long int t,n,k,i,temp;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        temp=n%k;
        if(temp==0)
        {
            cout<<k<<endl;
        }
        else
        cout<<temp<<endl;
    }
    return 0;
}