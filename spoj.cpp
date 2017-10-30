#include <bits/stdc++.h>
using namespace std;
int visited[150006];
long long int nodes = 0;
long long int edges = 0;
vector<int>adj[150006];
void dfs(int s)
{
	//cout<<s<<endl;
	visited[s]=1;
	nodes++;
	for(int i=0;i<adj[s].size();i++)
	{
		edges++;
		if(!visited[adj[s][i]])
		{
			dfs(adj[s][i]);
		}
	}
}
int main() {
	
	//relevant code here
	int n,m,u,v,f=1;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
			edges/=2;
			//cout<<edges<<" "<<nodes<<endl;
			if(edges != (nodes*(nodes-1))/2)
			{
				f=0;
				break;
			}
			nodes=0;
			edges=0;
		}
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	return 0;
}