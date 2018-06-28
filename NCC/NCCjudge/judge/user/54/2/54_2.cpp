#include<iostream>
using namespace std;

class inp
{
  public:
  int n;
  int a[1000];
  int max[3];
};

int main(void)
{
    int t;
    inp x[1000];
    for(int i=0;i<t;i++)
    {
        cin>>x[i].n;
        for(int j=0;j<x[i].n;j++)
        {
            cin>>x[i].a[j];
        }
    }
    
    for(int i=0;i<t;i++)
    {
        int m,c;
        for(int k=0;k<3;k++)
        {
            m = x[i].a[0];
            c=0;
            for(int j=0;j<x[i].n;j++)
            {
                if(x[i].a[j]>m)
                {
                    m = x[i].a[j];
                    c=j;
                }
            }
            x[i].a[c] = -100;
            x[i].max[k]=m;
        }
    }
    
    for(int z=0;z<t;z++)
    {
        for(int e=0;e<3;e++)
        {
            cout<<x[z].max[e]<<" ";
        }
        cout<<endl;
    }
    return 0;
}