#include<iostream>
using namespace std;
int main()
{
    int T,O,R[O],i=0;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>O;
        int R[O];
        for(int j=0;j<O;j++)
        {
            cin>>R[j];
            
        }
        for(int k=0;k<O;k++)
        {
            for(int l=0;l<O-1;l++)
            {
                if(R[l]<R[l+1])
                {
                    int t=R[l];
                    R[l]=R[l+1];
                    R[l+1]=t;
                }
            }
        }
        cout<<R[0]<<" "<<R[1]<<" "<<R[2]<<"\n";
        
    }

    return 0;
}