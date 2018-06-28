#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int z,n;
    int k;
    cin>>n;
    z = pow(2,n);
    k = (z % 1000000007);
    cout<<k;
    return 0;
}
