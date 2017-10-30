#include<bits/stdc++.h>
using namespace std;
vector<int>adj[200005];
int visited[200011];
int arr[200010];
map<int, int>m;
map<int, int>::iterator it;
int dfs(int start)
{
	int i, ans=0, max=0;
	stack<int>s;
	s.push(start);
	m[arr[start]]++;
	visited[start]=1;
	while(!s.empty())
	{
		int t = s.top();
		s.pop();
		visited[t]=1;
		for(i=0;i<adj[t].size();i++)
		{
			if(visited[adj[t][i]]==0)
			{
				m[arr[adj[t][i]]]++;
				s.push(adj[t][i]);
			}
		}
	}
	for(it=m.begin();it!=m.end();it++)
	{
		ans += (it->second);
		if(max < (it->second))
			max = it->second;
	}
	m.clear();
	return ans-max;
}
int main()
{
	int a,b,c,i,count=0,l,r,ans=0;
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<=a;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<=b;i++)
	{
		scanf("%d%d",&l,&r);
		adj[r].push_back(l);
		adj[l].push_back(r);
	}
	for(i=1;i<=a;i++)
		if(visited[i]==0)
			ans += dfs(i);
	printf("%d\n",ans);
	return 0;
}

