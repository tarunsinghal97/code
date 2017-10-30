#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>adj[500005];
ll dist[500005];
ll vis[500005];
void dfs(ll s)
{
	vis[s]=1;
	for(ll i=0;i<adj[s].size();i++)
	{
		if(vis[adj[s][i]]==0)
		{
			dist[adj[s][i]] = dist[s]+1;
			dfs(adj[s][i]);
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	dist[1]=0;
	for(ll i=0;i<n-1;i++)
	{
		ll u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	ll cnt1=0;
	ll cnt2=0;
	dfs(1);
	for(ll i=1;i<=n;i++)
	{
		if(dist[i]%2==0)
		{
			cnt1++;
		}
		else
			cnt2++;
	}
	ll ans = (cnt1*cnt2)-(n-1);
	cout<<ans<<endl;
}