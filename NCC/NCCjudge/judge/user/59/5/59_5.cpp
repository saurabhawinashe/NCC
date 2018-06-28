#include<iostream>
#include<math.h>
using namespace std;

int main(){

int t,count=0,flag = 0;
int num1,num2;
cin>>t;
while(t--){
	cin>>num1;
	cin>>num2;
	for(int i=num1;i<=num2;i++){
			int sq = sqrt(i);
			for(int j=2;j<=sq;j++){
				if(i%j==0){
					flag = 1;
                    				
				}
		}
		if(flag==0)
		{count++;
		}
		flag=0;
	}
	cout<<count<<endl;
	count=0;
}
return 0;
}