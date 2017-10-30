#include <bits/stdc++.h>
using namespace std;
int arr[100009];
int vis[100009];
vector<int>adj[600000];
vector<pair<int,double> >v1;

void dfs(int s,int p,double ans)
{
	vis[s]=1;
	if(adj[s].size()==1 && adj[s][0]==p){
		v1.push_back(make_pair(s,ans));
	}

	for(int i=0;i<adj[s].size();i++)
	{
		if(vis[adj[s][i]]==0)
		{
			int a;
			if(adj[s].size()==1)
				a = adj[s].size();
			else
				a = adj[s].size()-1;
			double x = (((double)1/a))*ans;
			arr[adj[s][i]] = arr[s] + 1;
			//cout<<x<<endl;
			dfs(adj[s][i],s,x);
		}
	}
}

int main()
{
	
		int n,u,v;
		scanf("%d",&n);
		for(int i=0;i<n-1;i++)
		{
			scanf("%d%d",&u,&v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		double x = (double)1/(adj[1].size());
		dfs(1,1,x);
		double sum=0;
		//cout<<adj[1].size()<<" "<<adj[2].size()<<" "<<adj[3].size()<<endl;
		for(int i=0;i<v1.size();i++)
		{
			sum += arr[v1[i].first]*(v1[i].second);
		}
		printf("%lf\n",sum);
	return 0;
}