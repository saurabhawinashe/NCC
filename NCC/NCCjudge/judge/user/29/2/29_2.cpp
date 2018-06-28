/*Type your code here!*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,n,*a,i,max,j,k,z;
	cin>>t;


	for(j=0;j<t;j++)
	{
		cin>>n;
		a=new long long[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	k=0;
	max=-2000;
	while(k<3)
	{

	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			z=i;
		}
	}
	a[z]=-2002;

	cout<<max<<" ";
	max=-2000;
	k++;
	}
	cout<<endl;
	}
	return 0;
}