/*Type your code here!*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,x1,x2,count=0,prime=0;
	cin>>x1>>x2;
	for(i=x1;i<=x2;i++)
	{
		for(j=1;j<=x1;j++)
		{
			if(i%j==0)
			{
				count++;
			}
			if(count==2)
					{
						prime++;
						count=0;
					}
		}
	}
	cout<<prime;

	return 0;
}
