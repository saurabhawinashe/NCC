#include<iostream>
using namespace std;

int main(){

double t;
int x,n,max,change;
cin>>t;

while(t--){
	cin>>n;
	cin>>x;
	change = n%x;
	max = n/x;
	
	if(change==0){
		change = x;
		max--;
 	} cout<<change<<endl;
}
return 0;
}