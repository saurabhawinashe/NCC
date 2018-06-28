#include <iostream>
#include<cmath>
using namespace std;

class num{
  
  public:
  int n1,n2;
};

int checkPrime(int n1,int n2)
{
    int x;
    int fin=0;
    if(n1==1)
    {
        n1++;
    }
    for(x=n1;x<=n2;x++)
    {
        int check=0;
        for(int i=2;i<sqrt(x);i++)
        {
            if(x%i==0)
            {
                check++;
                break;
            }
        }
        if(check==0)
        {
            fin++;
        }
    }
    return fin;
}

int main() {
	int t;
	cin>>t;
    num x[50];
    for(int q=0;q<t;q++)
    {
        cin>>x[q].n1>>x[q].n2;
    }
    
    int m;
    for(int i=0;i<t;i++)
    {
        m = checkPrime(x[i].n1,x[i].n2);
        cout<<m<<endl;
    }

	return 0;
}
