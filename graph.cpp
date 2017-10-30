#include <bits/stdc++.h>
using namespace std;
long long int dis[100004],d;

void djikstra(long long int s,vector<pair<long long int,long long int > >v[],long long int x,long long int k)
{
	priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int> >,greater<pair<long long int,long long int> > >pq;
	pq.push(make_pair(d,s));
	dis[s]=d;
	while(!pq.empty())
	{
		long long int p = pq.top().second;
		pq.pop();
		for(vector<pair<long long int,long long int> >::iterator it=v[p].begin();it!=v[p].end();it++)
		{
			if(dis[it->second]>it->first+dis[p])
			{
				dis[it->second]=it->first+dis[p];
				pq.push(make_pair(dis[it->second],it->second));
			}
		}

	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,x,m,s;
		cin>>n>>k>>x>>m>>s;

		d=0;
		for(long long int i=0;i<100004;i++)
		{
			
				dis[i]=1000000000000004;
		
		}

		vector<pair<long long int,long long int> >v[100004];
		if(s<=k)
		{
			for(long long int i=1;i<=k;i++)
			{
				if(i!=s)
					v[s].push_back(make_pair(x,i));
			}
		}
		long long int min=1000000000000004,node;
		while(m--)
		{
			long long int a,b,c;
			cin>>a>>b>>c;
			v[a].push_back(make_pair(c,b));
			v[b].push_back(make_pair(c,a));
		}
		if(s>k)
		{
			djikstra(s,v,x,k);
			for(long long int i=1;i<=k;i++)
			{
				if(min>dis[i])
				{
					min=dis[i];
					node=i;
				}
			}
			for(long long int i=1;i<=k;i++)
			{
				if(i!=node)
				{
					v[node].push_back(make_pair(x,i));
				}
			}

			d=min;
		}
		if(s>k)
			s=node;
		djikstra(s,v,x,k);
		for(long long int i=1;i<=n;i++)
			cout<<dis[i]<<" ";
		cout<<endl;

	}
	return 0;
}
