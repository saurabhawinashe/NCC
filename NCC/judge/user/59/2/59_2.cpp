#include<iostream>
using namespace std;

int main(){
int t,reads; 
long int temp[reads]; 
cin>>t;
while(t--){
	cin>>reads;if(reads>=3){
	for(int i=0;i<reads;i++){
	cin>>temp[i];	
	}
	for(int j=0;j<reads;j++){
		for(int k=j;k<reads-1;k++){		
			if(temp[k]>temp[k+1]){
			int tempo = temp[k];
			temp[k] = temp[k+1];
			temp[k+1] = tempo;		
			}
		}
	}

	cout<<temp[reads-1]<<" "<<temp[reads-2]<<" "<<temp[reads-3]<<endl;	
}
}
return 0;
}