#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1000009];
map<int,int>mp;
int vis[5000009];
int arr[5009][5009];
int tar[5009][5009];
vector<pair<int,int> >v;
void dfs(int s)
{
	if(mp[s]==1 || s==0)
		return;
	vis[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		if(adj[s][i]==0 || mp[adj[s][i]]==1)
		{
			continue;
		}
		else
		{
			if(vis[adj[s][i]]==0)
				dfs(adj[s][i]);
		}
	}
}
void activate(int a,int b)
{
	for(int i=a;i<=b;i++)
		mp[tar[v[i].first+1][v[i].second+1]]=1;
}
void deactivate(int a,int b)
{
	for(int i=a;i<=b;i++)
		mp[tar[v[i].first+1][v[i].second+1]]=0;
}
int main()
{
	int n;
	cin>>n;
	int k=1;
	for(int i=0;i<(n*n)+9;i++)
		vis[i]=0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
				mp[k]=1;
			tar[i][j]=k++;
		}
	}
	for(int i=0;i<n+3;i++)
		tar[i][0]=0,tar[i][n+1]=0,tar[0][i]=0,tar[n+1][i]=0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			adj[tar[i][j]].push_back(tar[i][j+1]);
			adj[tar[i][j]].push_back(tar[i+1][j]);
			adj[tar[i][j]].push_back(tar[i+1][j+1]);
			adj[tar[i][j]].push_back(tar[i-1][j-1]);
			adj[tar[i][j]].push_back(tar[i-1][j]);
			adj[tar[i][j]].push_back(tar[i][j-1]);
			adj[tar[i][j]].push_back(tar[i-1][j+1]);
			adj[tar[i][j]].push_back(tar[i+1][j-1]);

			adj[tar[i+1][j-1]].push_back(tar[i][j]);
			adj[tar[i-1][j+1]].push_back(tar[i][j]);
			adj[tar[i][j-1]].push_back(tar[i][j]);
			adj[tar[i-1][j]].push_back(tar[i][j]);
			adj[tar[i-1][j-1]].push_back(tar[i][j]);
			adj[tar[i+1][j+1]].push_back(tar[i][j]);
			adj[tar[i+1][j]].push_back(tar[i][j]);
			adj[tar[i][j+1]].push_back(tar[i][j]);
		}
	}
	int q,a,b;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	int l=0;
	int r = v.size();
	activate(0,v.size()-1);
	int f=0;
	for(int i=1;i<n+1;i++)
			dfs(i);
	for(int j=1;j<n+1;j++)
		if(arr[n][j]!=1 && mp[tar[n][j]]!=1)
			if(vis[tar[n][j]]==1)
				f=1;
	if(f==1)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	deactivate(0,v.size()-1);
	while(l<r)
	{
		f=0;
		int mid = (l+r)/2;
		activate(0,mid);
		for(int i=0;i<(n*n)+9;i++){
			vis[i]=0;
		}
		for(int i=1;i<n+1;i++)
			dfs(i);
		for(int j=1;j<n+1;j++)
			if(arr[n][j]!=1 && mp[tar[n][j]]!=1)
				if(vis[tar[n][j]]==1)
					f=1;
		if(f==0)
		{
			deactivate(0,mid);
			r = mid;
		}
		else
			l = mid+1;
	}
	cout<<l+1<<endl;
	return 0;
}