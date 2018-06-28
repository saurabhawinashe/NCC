#include<iostream>
using namespace std;
class matrix
{
    public:int arr1[10][10],arr2[10][10],arr3[10][10],sum,r1,r2,c1,c2;
    void upper()
    {
    sum=0;
    cout<<"enter the number of rows and columns"<<endl;
    cin>>r1>>c1;
    if(r1==c1)
    {
    cout<<"enter the elements of your matrix"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<c1;i++)
        {
            for(int j=0;j<r1;j++)
            {
                if((arr1[j][i]==0)&&((i+j)<(2*i)))
                sum=sum+1;
            }
        }
        if(sum==((2*c1)-3))
        cout<<"upper triangular matrix"<<endl;
        else
        cout<<"Not an upper triangular matrix"<<endl;
    }
    else
    cout<<"Not square matrix"<<endl;
    }
    void addition()
    {
        cout<<"enter number of rows and columns of first matrix"<<endl;
        cin>>r1>>c1;
        cout<<"enter number of rows and columns of second matrix"<<endl;
        cin>>r2>>c2;
        if(r1==r2&&c1==c2)
        {
            cout<<"enter the elements of first matrix"<<endl;
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    cin>>arr1[i][j];
                }
            }
            cout<<"enter the elements of second matrix"<<endl;
            for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                    cin>>arr2[i][j];
                }
            }
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    arr3[i][j]=arr1[i][j]+arr2[i][j];
                }
            }
            cout<<"the sum is"<<endl;
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    cout<<arr3[i][j]<<endl;
                }
            }
        }
        else
            cout<<"addition is not possible"<<endl;
    }
    void subtraction()
    {
        cout<<"enter number of rows and columns of first matrix"<<endl;
        cin>>r1>>c1;
        cout<<"enter the number of rows and columns of second matrix"<<endl;
        cin>>r2>>c2;
        if(r1==r2&&c1==c2)
        {
            cout<<"enter the elements of first matrix"<<endl;
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    cin>>arr1[i][j];
                }
            }
            cout<<"enter the elements of second matrix"<<endl;
            for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                    cin>>arr2[i][j];
                }
            }
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    arr3[i][j]=arr1[i][j]-arr2[i][j];
                }
            }
            cout<<"the difference is"<<endl;
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    cout<<arr3[i][j]<<endl;
                }
            }
        }
        else
            cout<<"subtraction not possible"<<endl;
    }
    void transpose()
    {
        cout<<"enter the number of rows and columns"<<endl;
        cin>>r1>>c1;
        cout<<"enter the elements of matrix"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                arr2[i][j]=arr1[j][i];
            }
        }
        cout<<"the transpose is"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<arr2[i][j]<<endl;
            }
        }
    }
    void multiply()
    {
        cout<<"enter the number of rows and columns of first matrix"<<endl;
        cin>>r1>>c1;
        cout<<"enter number of rows and columns of second matrix"<<endl;
        cin>>r2>>c2;
        if(c1==r2)
        {
        cout<<"enter the elements of first matix"<<endl;
        for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    cin>>arr1[i][j];
                }
            }
        cout<<"enter elements of second matrix"<<endl;
        for(int i=0;i<r2;i++)
            {
                for(int j=0;j<c2;j++)
                {
                    cin>>arr2[i][j];
                }
            }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                arr3[i][j]=0;
                for(int k=0;k<c2;k++)
                {
                    arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
                }
            }
        }
        cout<<"the product is"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
               cout<<arr3[i][j]<<endl;
            }
        }
        }
        else
            cout<<"multiplication not conformable"<<endl;
    }
    void diagonal()
    {
        int s=0;
        cout<<"enter the number of rows and columns"<<endl;
        cin>>r1>>c1;
        if(r1==c1)
        {
            cout<<"enter the elements of matrix"<<endl;
            for(int i=0;i<r1;i++)
            {
                for(int j=0;j<c1;j++)
                {
                    cin>>arr1[i][j];
                }
            }
            for(int i=0;i<r1;i++)
            {
                s=s+arr1[i][i];
            }
        }
        else
            cout<<"diagonal not possible"<<endl;
        cout<<"the sum of the diagonal elements is "<<s<<endl;
    }
    void saddle()
    {
        int max=0,min=0,l=0;
        cout<<"enter the number of rows and columns"<<endl;
        cin>>r1>>c1;
        cout<<"enter the elements of matrix"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                if(arr1[i][j]<min)
                {
                    l=j;
                    min=arr1[i][j];
                }
            }
            for(int k=0;k<r1;k++)
            {
                if(arr1[k][i]>max)
                max=arr1[k][i];
            }
            if(max==min)
                cout<<arr1[i][l]<<" is a saddle point at position"<<i+1<<","<<l+1<<endl;
        }
    }
};
int main()
{
    matrix obj;
    obj.upper();
    obj.addition();
    obj.subtraction();
    obj.multiply();
    obj.transpose();
    obj.saddle();
    obj.multiply();
    obj.diagonal();
    return 0;
}
