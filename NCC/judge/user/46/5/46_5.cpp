#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1[20], x2[20], T, i, j,k;
    cin >> T;
    for(i=0;i<T;i++)
    {
        cin >> x1[i] >> x2[i];
    }
    for(i=0;i<T;i++)
    {
        for(j=x1[i];j<x2[i];j++)
        {
            for(k=2;k<sqrt(j);k++)
            {
                if(j%k==0)
                {
                    goto x;
                }
            }
            cout << j;
            x:
        }
    }
    return 0;
}