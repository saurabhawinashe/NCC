/*Type your code here!*/
#include<iostream>
using namespace std;
int main()
{
 long int t,i,j,k,cnt,cpt,m,n;
cin>>t;
for(i=0;i<t;i++)
{
 cin>>m>>n;
 cpt=0;
 for(j=m;j<=n;j++)
{
cnt=0;
 for(k=2;k<j;k++)
 {
 if(j%k==0)
 cnt++;
 }
 if(cnt==0)
 {
 cpt++;
 }

}
if(m==1)
cout<<cpt-1<<endl;
else
cout<<cpt<<endl;
}
return 0;
}