#include <stdio.h>
#include <stdlib.h>
int adj[100][100],n,vis[100];
void create_graph(int a, int b)
{
	adj[a][b]=1;
	adj[b][a]=1;
}
void dfs(int v)
{
	int i;
	vis[v]=1;
	//printf("%d ",v);
	for(i=0;i<n;i++)
	{
		if(vis[i]==0 && adj[v][i]==1)
			dfs(i);
	}

}
int main()
{
	int i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		create_graph(a,b);
	}
	dfs(0);
	for(i=0;i<n;i++)
	{
		if(vis[i]==1)
			printf("%d ",i);
	}

	return 0;
}
