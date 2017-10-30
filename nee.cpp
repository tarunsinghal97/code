#include <bits/stdc++.h>
using namespace std;
long long int n,k,u,v,w,q;

void modify(int idx, int val) {
	if (idx == 0) return;
	while (idx < N) {
		tree[idx] ^= val;
		idx += (idx & -idx);
	}
}
int get(int idx) {
	int ret = 0;
	while (idx > 0) {
		ret ^= tree[idx];
		idx -= (idx & -idx);
	}
	return ret;
}

void solve(int v, int p) {
	modify(mp[arr[v]], arr[v]);
	for (lli i = 0; i < Q[v].size(); ++i) {
		sol[Q[v][i].second] ^= (get(mp[Q[v][i].first]));
	}
	for (lli u : adj[v]) {
		if (u == p) continue;
		solve(u, v);
	}
	modify(mp[arr[v]], arr[v]);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v>>w;
			adj[u].push_back(make_pair(v,w));
			adj[v].push_back(make_pair(u,w));
		}
		cin>>q;
		for(auto i:se){
			mp2[k]=i;
			mp[i]=k++;
		}
		for(int i=0;i<q;i++)
		{
			cin>>u>>v>>k;
		}
	}
}