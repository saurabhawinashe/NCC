#include<iostream>
using namespace std;

int main()
{
    int T,N[20],X[20],a[20],i;
    cin >> T;
    for(i=0;i<T;i++)
    {
        cin >> N[i] >> X[i];
    }
    
    for(i=0;i<T;i++)
    {
        a[i]=N[i]%X[i];
        if(a[i]==0)
        {
            a[i]=X[i];
        }
    }
    
    for(i=0;i<T;i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}