/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
	int i=1,t,n[1000],x[1000],money_r[1000],mon[1000];
	cin>>t;
	if(t>100000 && t<1)
	{
		goto x;
	}
	for(int i=0;i<t;i++)
	{
		cin>>n[i]>>x[i];
		money_r[i]=(int)n[i]/x[i];
		mon[i]=money_r[i]*x[i];
		money_r[i]=n[i]-mon[i];
	}
	for(int i=0;i<t;i++)
		{
			cout<<money_r[i];
			              cout<<endl;
		}
	x:
	return 0;
}
