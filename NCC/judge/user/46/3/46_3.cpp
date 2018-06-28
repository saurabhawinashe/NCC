#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[30];
    int k,j,T,N[20],i,X[20];
    cin >> T;
    for(j=0;j<T;j++)
    {
        cin >> N[j];
        for(i=0;i<N[j];i++)
        {
            cin >> a[i];
        }
        for(k=0;k<N[j]/2;k++)
        {
            if(a[k]==a[N[i]-k])
            {
                X[k]=N[j]/2;
            }
            else
            {
                X[k]=N[j];
            }
        }
        cout << X[j] << endl;
    }
    return 0;
}