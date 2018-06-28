#include <iostream>
using namespace std;

int main() {
    int n[1000],x[1000];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n[i]>>x[i];
    }
    int temp;
    for(int j=0;j<t;j++)
    {
        temp = n[j] % x[j];
        if(temp == 0)
        {
            temp=temp+x[j];
        }
        cout<<temp<<endl;
    }
	// your code goes here
	return 0;
}
