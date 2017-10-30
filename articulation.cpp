#include<bits/stdc++.h>
using namespace std;
int visited[100010];
int disc[100010];
int low[100010];
vector<int>adj[100010];
int parent[100010];
set<int>s;
set<int>::iterator it;
void fun(int start, int time)
{
	int i,child=0;
	low[start] = disc[start] = time;
	visited[start]=1;
	for(i=0;i<adj[start].size();i++)
	{
		if(visited[adj[start][i]]==0)
		{
			parent[adj[start][i]]=start;
			child++;
			fun(adj[start][i],time+1);
			low[start] = min(low[start], low[adj[start][i]]);
			if(parent[start]==-1 && child>1)
				s.insert(start);
			else if(parent[start]!=-1 && low[adj[start][i]] >= disc[start])
				s.insert(start);
		}
		else
			low[start] = min(low[start], disc[adj[start][i]]);
	}
}
int main()
{
	int n,m,i,o,d;
	while(1)
	{	
		s.clear();
		scanf("%d%d",&n,&m);
		for(i=0;i<=n;i++)
		{
			adj[i].clear();
			visited[i]=0,disc[i]=0,low[i]=0;
		}
		memset(parent,-1,sizeof(parent));
		if(n==0 && m==0)break;
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&o,&d);
			adj[o].push_back(d),adj[d].push_back(o);
		}
		fun(1,0);
		printf("%d\n",(int)s.size());
	}
	return 0;
}


