#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int dist[1000000];
int visited[1000000];
vector<pair<int,int> >adj[1000000];

void dfs(int s)
{
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >p;
	p.push(make_pair(0,s));
	dist[s]=0;
	while(!p.empty())
	{
		long long int p1 = p.top().second;
		p.pop();
		for(vector<pair<int,int> >::iterator it=adj[p1].begin();it!=adj[p1].end();it++)
		{
			if(dist[it->second]>it->first+dist[p1])
			{
				dist[it->second]=it->first+dist[p1];
				p.push(make_pair(dist[it->second],it->second));
			}
		}
 
	}
}
int main()
{
	for(int i=0;i<100000;i++)
	{
			visited[i]=0;
			dist[i]=INT_MAX;
			arr[i]=i;
			adj[i].clear();
	}
	int n;
	scanf("%d",&n);
	while(n--)
	{
		
		int u,v,w;
		
		scanf("%d%d%d",&u,&v,&w);
		adj[v].push_back(make_pair(w,u));
		adj[u].push_back(make_pair(w,v));
	}
	int q,a,b;
		scanf("%d%d",&a,&q);
		dfs(a);
		while(q--)
		{
			scanf("%d",&b);
			if(a!=b && dist[b]==INT_MAX)
				printf("NO PATH\n");
			else
				printf("%d\n",dist[b]);
		}
	return 0;
}