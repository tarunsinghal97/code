#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>adj[100010];
set<int>s;
int flag=0,k;
int visited[100010];
ll dfs(int start, ll count)
{
	if(s.find(start)!=s.end())
		flag=1;
	visited[start]=1;
	for(int i=0;i<adj[start].size();i++)
	{
		if(visited[adj[start][i]] == 0)
			count = dfs(adj[start][i], count+1);
	}
	return count;
}
int main()
{
	int n,m,i,o,d,a;
	scanf("%d%d%d",&n,&m,&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a);
		s.insert(a);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&o,&d);
		adj[o].push_back(d);
		adj[d].push_back(o);
	}
	ll count = dfs(o,1);
	ll ans = 0;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0 && s.find(i)==s.end())
			ans++;
	}
	if(!flag)
		printf("%lld\n",(ans*count)+(ans+count));
	else
		printf("%lld\n",ans*count);
	return 0;
}
