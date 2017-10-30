#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100002];
int vis[100002];
int node[100002],m;

int dfs(int src,int cnt)
{
	vis[src]=1;
	int count=0;
	if(node[src]==-1)
		cnt++;

	else
		cnt=0;

	if(cnt>m)
		return count;

	if(adj[src].size()==1 && src!=1)
		if(cnt<=m)
			return 1;

	for(int i=0;i<adj[src].size();i++)
		if(!vis[adj[src][i]])
			count += dfs(adj[src][i],cnt);

	return count;
}


int main()
{

	int n,a,b;
	cin>>n>>m;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i])
		{
			node[i]=-1;
		}
	}
	n = n-1;
	while(n--)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	cout<<dfs(1,0)<<endl;
	return 0;
}