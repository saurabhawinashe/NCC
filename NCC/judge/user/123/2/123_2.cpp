/*Type your code here!*/#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=300+10;
const int md=1e9+7;
int a[maxn],v[maxn],n,tot;
ll c[maxn][maxn],dp[maxn][maxn];
int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	//freopen("test.in","r",stdin);
    ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int t;
    scanf("%d",&t);
    while(t--){
        memset(a,0,sizeof(a));
        memset(v,0,sizeof(v));
        memset(c,0,sizeof(c));
        memset(dp,0,sizeof(dp));

    	c[0][0]=1;
    	for(int i=1;i<=300;i++)
    	{
    		c[i][0]=1;
    		for(int j=1;j<=i;j++)
    			c[i][j]=(c[i-1][j]+c[i-1][j-1])%md;
    	}
    	scanf("%d",&n);
    	for(int i=1;i<=n;i++)
    	{
    		scanf("%d",&a[i]);
    		for(int j=2;j*j<=a[i];j++)
    		{
    			while(a[i]%(j*j)==0)
    				a[i]/=(j*j);
    		}
    	}
        tot=0;
    	sort(a+1,a+n+1);
    	for(int i=1;i<=n;i++)
    		if(a[i]==a[i-1])
    			v[tot]++;
    		else
    		{
    			tot++;
    			v[tot]=1;
    		}
    	sort(v+1,v+tot+1,cmp);
    	int now=v[1];
    	dp[1][v[1]-1]=1;
    	for(int i=2;i<=tot;i++)
    	{
    		for(int j=0;j<now;j++)
    			for(int k=1;k<=v[i];k++)
    				for(int l=0;l<=j&&l<=k;l++)
    					if(now+1-j>=k-l)
    					{
    						int nx=j-l+v[i]-k;
    						dp[i][nx]=dp[i][nx]+dp[i-1][j]*c[v[i]-1][k-1]%md*c[j][l]%md*c[now+1-j][k-l]%md;
    						dp[i][nx]%=md;
    					}
    		now+=v[i];
    	}
    	ll ans=dp[tot][0];
    	for(int i=1;i<=tot;i++)
    		for(int j=1;j<=v[i];j++)
    			ans=ans*j%md;
    	cout<<ans<<"\n";
    }
	return 0;
}