#include<iostream>
using namespace std;

int main()
{
    int j,i,T,S[20],N,k;
    cin >> T;
    do
    {
        cin >> N;
        for(i=0;i<N;i++)
        {
            cin >> S[i];
        }
        for(k=0;k<N/2;k++)
        {
        for(i=0;i<N;i++)
        {
            if(S[i]<S[i+1])
            {
                j=S[i];
                S[i]=S[i+1];
                S[i+1]=j;
            }
        }
        }
        cout << S[0] <<" "<< S[1] <<" "<< S[2] << endl;
        T--;
    }while(T>0);
    return 0;
}