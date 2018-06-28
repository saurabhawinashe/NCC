#include<iostream>
 
using namespace std;
 
int main()
{
    int a[50],n,i,j,temp;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    //cout<<"Enter the array elements: "; 
    
    for(i=0;i<n;++i)
        cin>>a[i];
        
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    
    cout<<a[n-1]<<" "<<a[n-2]<<" "<<a[n-3]<<endl;
    }
    return 0;
}