#include <bits/stdc++.h>
using namespace std;
#define si(x) scanf("%d",&x)
#define sic(x) scanf("%c",&x)
vector<int>edges[1000000];
int visited[1000000]={0};
int dist[1000000]={0};
void dfs(int s)
{
	visited[s]=1;
	for(int i=0;i<edges[s].size();i++)
	{
		if(visited[edges[s][i]]==0)
		{
			dist[edges[s][i]] = dist[s]+1;
			dfs(edges[s][i]);
		}
	}
}
int main()
{
	int t;
	si(t);
	while(t--)
	{
		for(int i=0;i<1000000;i++){
			visited[i]=0, dist[i]=0;
			edges[i].clear();
		}
		set<int>S;
		int r,c,f=0,s1=0;
		si(c),si(r);
		int maxi=0;
		
		char s[r][c+1];
		int c1[r][c+1];
		int p=0;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c+1;j++)
				sic(s[i][j]),c1[i][j]=f++;
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c+1;j++)
			{
				if(s[i][j]=='.')
				{
					p = c1[i][j];
					if(s[i][j+1]=='.' && j+1<c)
					{
						edges[c1[i][j]].push_back(c1[i][j+1]);
						edges[c1[i][j+1]].push_back(c1[i][j]);
						
					}
					if(s[i+1][j]=='.' && i+1<r)
					{
						edges[c1[i][j]].push_back(c1[i+1][j]);
						edges[c1[i+1][j]].push_back(c1[i][j]);
						
					}
					if(s[i][j-1]=='.' && j-1>=0)
					{
						edges[c1[i][j]].push_back(c1[i][j-1]);
						edges[c1[i][j-1]].push_back(c1[i][j]);
						
					}
					if(s[i-1][j]=='.' && i-1>=0)
					{
						edges[c1[i][j]].push_back(c1[i-1][j]);
						edges[c1[i-1][j]].push_back(c1[i][j]);
					}
					S.insert(p);
				}
			}
		}
		maxi = 0;
		int idx = 0;
		dfs(p);
		for(int i=0;i<f;i++){
			if(maxi < dist[i]){
				maxi = dist[i];
				idx = i;
			}
		}
		for(int i=0;i<f;i++){
			visited[i]=0;
			dist[i]=0;
		}
		dfs(idx);
		for(set<int>::iterator it=S.begin();it!=S.end();it++)
		{
			if(visited[(*it)]==0)
			{
				printf("Maximum rope length is 0.\n");
				s1=1;
				break;
			}

		}
		if(s1==0){
		for(int i=0;i<f;i++)
			if(maxi<dist[i])
				maxi = dist[i];
		
		printf("Maximum rope length is %d.\n",maxi);
	}
}
	return 0;
}