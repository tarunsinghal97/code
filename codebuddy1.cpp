#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,x,y,s=-1,f=-1;
		cin>>n>>m>>k;
		int dp[n][m];
		memset(dp,0,sizeof(dp));
		while(k--)
		{
			cin>>x>>y;
			dp[x-1][y-1]=-1;
		}
		for(int i=0;i<n;i++)
		{
			if(dp[i][0]==-1)
			{
				f=i;
			}
			else
			{
				dp[i][0]=1;
			}
		}

		for(int i=0;i<m;i++)
		{
			if(dp[0][i]==-1)
			{
				s=i;
				continue;
			}
			dp[0][i]=1;
		}
		if(f!=-1)
		{
			for(int i=f;i<n;i++)
			{
				dp[i][0]=0;
			}
		}
		if(s!=-1)
		{
			for(int i=s;i<m;i++)
				dp[0][i]=0;
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				if(dp[i][j]==-1)
				{
					dp[i][j]=0;
					continue;
				}
				if(dp[i-1][j]==-1 && dp[i][j-1]!=-1)
					dp[i][j]=dp[i][j-1];
				else if(dp[i-1][j]!=-1 && dp[i][j-1]==-1)
					dp[i][j]=dp[i-1][j];
				else if(dp[i-1][j]==-1 && dp[i][j-1]==-1)
					dp[i][j]=0;
				else
				{
					dp[i][j]=dp[i-1][j]+dp[i][j-1];
				}
			}
		}
		cout<<dp[n-1][m-1]<<endl;
	}
	return 0;
}
