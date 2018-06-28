/*Type your code here!*/#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcount(n)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const ld PI = acos((ld) -1);
const ld EPS = 1e-9;

ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}

template<class T> void setmin(T& a, T val) {if (a > val) a = val;}
template<class T> void setmax(T& a, T val) {if (a < val) a = val;}

void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}


#define MAX 100001
#define NIL 0
#define INF (1<<28)

vector< int > G[MAX];
int n, m;
int match[MAX], dist[MAX];

void clear()
{
    FOR(i,0,MAX)
    G[i].clear();

    ms(match,0);
    ms(dist,0);
}

bool bfs() {
    int i, u, v, len;
    queue< int > Q;
    for(i=1; i<=n; i++)
    {
        if(match[i]==NIL)
        {
            dist[i] = 0;
            Q.push(i);
        }
        else dist[i] = INF;
    }
    dist[NIL] = INF;
    while(!Q.empty())
    {
        u = Q.front(); Q.pop();
        if(u!=NIL)
        {
            len = G[u].size();
            for(i=0; i<len; i++)
            {
                v = G[u][i];
                if(dist[match[v]]==INF)
                {
                    dist[match[v]] = dist[u] + 1;
                    Q.push(match[v]);
                }
            }
        }
    }
    return (dist[NIL]!=INF);
}

bool dfs(int u)
{
    int i, v, len;
    if(u!=NIL) {
        len = G[u].size();
        for(i=0; i<len; i++)
        {
            v = G[u][i];
            if(dist[match[v]]==dist[u]+1)
            {
                if(dfs(match[v]))
                {
                    match[v] = u;
                    match[u] = v;
                    return true;
                }
            }
        }
        dist[u] = INF;
        return false;
    }
    return true;
}

int hopcroft_karp() {
    int matching = 0, i;

    while(bfs())
        for(i=1; i<=n; i++)
            if(match[i]==NIL && dfs(i))
                matching++;
    return matching;
}

int lcs( string X, string Y, int l1, int l2 )
{
    int L[l1+1][l2+1];
    int i, j;

    for (i=0; i<=l1; i++)
    {
        for (j=0; j<=l2; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;

            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    return L[l1][l2];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin>>tc;

	while(tc--)
	{
	    clear();
	    int k;
	    cin>>n>>m>>k;
	    string s1[n],s2[m];

	    FOR(i,0,n)
	    cin>>s1[i];

	    FOR(j,0,m)
	    cin>>s2[j];

	    FOR(i,0,n)
	    FOR(j,0,m)
	    {
	        if(lcs(s1[i],s2[j],s1[i].length(),s2[j].length())>k)
	        {
	            G[i+1].pb(j+1+n);
	            G[j+1+n].pb(i+1);
	        }
	    }

	    cout<<n+m-hopcroft_karp()<<"\n";

	}
	return 0;
}