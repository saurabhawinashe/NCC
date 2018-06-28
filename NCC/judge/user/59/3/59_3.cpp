/*Type your code here!*/#include<iostream>
using namespace std;

int main(){

double t;
cin>>t;
int len=0;
char ch[len];
while(t--){
	cin>>len;
	int s = len;
	for(int i=0;i<len;i++){
cin>>ch[i];		}
	for(int i=0;i < len;i++,len--){
	for(int j=0,k=len-1;j<k;j++,k--){
		if(ch[j]!=ch[k]){
			break;		
		}
	}
	}

	cout<<s-len<<endl;
}
return 0;
}