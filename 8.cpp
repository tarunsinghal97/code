#include<bits/stdc++.h>
using namespace std;
vector< pair<long long int, long long int> > adj[50010];
int visited[50010];
int p[50010][25];
int t[50010];
int level[50501];
#define ll long long int
map<ll, ll>m;
ll n;
set<long long int>se;
set<long long int>::iterator it, it2;
void lca_preprocessing()
{
	int i,j;
	for(i=1;i<=n;i++)
		p[i][0] = t[i];
	for(i=1;i<=n;i++)
		for(j=1;j<<1 <n;j++)
		{
			if(p[i][j-1]!=0)
				p[i][j] = p[p[i][j-1]][j-1];
		}
}

int lca(int u, int v)
{
	if(level[u]<level[v])
		swap(u,v);
	int log1 = level[v],i;
	log1 = log(log1)/log(2);
	int diff = level[u]-level[v];
	for(i=0;diff>>i > 0 ;i++)
		if(diff>>i & 1)
			u = p[u][i];
	if(u==v)
		return u;
	for(i=log1;i>=0;i--)
		if(p[u][i]!=0 && p[u][i]!=p[v][i])
		{
			u = p[u][i];
			v = p[v][i];
		}
	return t[u];
}


long long int gcd(long long int a, long long int b)
{
	if(a==0)
		return b;

	return gcd(b%a, a);
}
void dfs(int start, long long int ans, int l)
{
	visited[start]=1;
	level[start] = l;
	int i, top = start;
	for(int i = 0; i < adj[top].size(); i++)
		if(visited[(adj[top][i]).first] == 0)
		{
			t[adj[top][i].first] = top;
			m[adj[top][i].first] =  ans + (adj[top][i].second);
			dfs((adj[top][i]).first , ans + (adj[top][i]).second, l+1);
		}
}
int main()
{
	int t1,i;
	scanf("%d",&t1);
	while(t1--)
	{
		long long int ans = 0,j;
		long long int m1,take,u,v,l,i;
		scanf("%lld%lld",&n,&m1);
		for(i=1;i<=n;i++)
		{
			t[i] = i;
			level[i]=0;
			visited[i]=0;
			adj[i].clear();
			for(j=0;j<25;j++)
				p[i][j]=0;
		}
		for(i=1;i<n;i++)
		{
			scanf("%lld%lld%lld",&u,&v,&l);
			adj[u].push_back(make_pair(v,l));
			adj[v].push_back(make_pair(u,l));
		}
		for(i=1;i<=m1;i++)
		{
			scanf("%lld",&take);
			se.insert(take);
		}
		it = se.begin();
		dfs(*it,0,0);
		lca_preprocessing();
		for(it=se.begin();it!=se.end();it++)
		{
			for(it2 = se.begin(); it2!=se.end(); it2++)
				ans += ((m[*it2] + m[ *it ] - 2 * m[ lca(*it, *it2) ]));

		}
		se.clear();
		m.clear();
		long long int ans3 = gcd(ans, m1*m1);
		printf("%lld %lld\n",ans/ans3 , (m1*m1)/ans3);
	}
	return 0;
}
