#include<bits/stdc++.h>
using namespace std;
int level[1002];
int t[10000];
int p[1002][26];
int n;
int chainNo;
int chainHead[10001];
int chainPos[10001];
int chainSize[1000];
int chainInd[10001];

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

int compute_lca(int u, int v)
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

void hld(int cur)
{
	if(chainHead[chainNo]==-1)
		chainHead[chainNo]=cur;
	chainInd[cur] = chainNo;
	chainPos[cur] = chainSize[chainNo];
	chainSize[chainNo]++;
	int ind = -1, mai = -1;
	for(int i = 0; i<adj[cur].size();i++)
	{
		if(subsize[adj[cur][i]] > mai)
		{
			mai = subsize[adj[cur][i]];
			ind = i;
		}
	}
	if(ind > 0)
		hld(adj[cur][i]);
	for(i=0;i<adj[cur].size();i++)
	{
		if(i!=ind)
		{
			chainNo++;
			hld(adj[cur][i]);
		}
	}
}
}

int main()
{
	int t1;
	scanf("%d",&t1);
	int k,o,d,i,j;
	for(k=1;k<=t1;k++)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			t[i]=i;
			level[i]=0;
			for(j=0;j<=LN;j++)
				p[i][j]=0;
		}
		for(i=1;i<=n;i++)
		{
			scanf("%d",&o);
			while(o--)
			{
				scanf("%d",&d);
				t[d]=i;
				level[d]=level[i]+1;
			}
		}
		int no;
		lca_preprocessing();
		scanf("%d",&no);
		printf("Case %d:\n",k);
		while(no--)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			int ans = compute_lca(a,b);
			printf("%d\n",ans);
		}
	}
	return 0;
}
