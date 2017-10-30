#include<bits/stdc++.h>
using namespace std;
int visited[100000];
int graph[1005][1005];
int Euler[100000];
int Level[100000];
int level[100000];
int H[100000];
int n;
void dfs(int start,int l)
{
	static int k = 1;
	Euler[k++]=start;
	Level[start]=l;
	int i;
	visited[start]=1;
	for(i=1;i<=n;i++)
	{
		if(graph[start][i]==1 && visited[i]==0)
		{
			dfs(i,l+1);
			Euler[k++]=start;
		}
	}
}

int lca(int u, int v)
{
	int idx1 = H[u], i,  min = INT_MAX, ans;
	int idx2 = H[v];
	if(idx2<idx1)
		swap(idx1, idx2);
	for(i = idx1; i<= idx2; i++)
		if(min > level[i])
		{
			min = level[i];
			ans = i;
		}
	return Euler[ans];
}

int main()
{
	int d, i, t,j,u;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		for(i=1;i<=1001;i++)
		{
			visited[i]=0;
			for(u=1;u<=1001;u++){
				graph[i][u]=0;
				graph[u][i]=0;
			}
		}
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			int k;
			scanf("%d",&k);
			while(k--)
			{
				scanf("%d",&d);
				graph[i][d]=1;
				graph[d][i]=1;
			}
		}
		dfs(1,0);
		for(i=1;i<=2*n-1;i++)
		{
			level[i] = Level[Euler[i]];
			if(H[Euler[i]]==0)
				H[Euler[i]]=i;
		}
		int q, ans;
		scanf("%d",&q);
		printf("Case %d:\n",j);
		for(i=1;i<=q;i++)
		{
			int u,v;
			scanf("%d%d",&u,&v);
			ans = lca(u,v);
			printf("%d\n",ans);
		}
	}
	return 0;
}
