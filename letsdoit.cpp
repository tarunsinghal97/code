#include<bits/stdc++.h>
using namespace std;
long long dp[1000000],dp2[1000000],inf=100000000000000;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,i,m;
		scanf("%d%d",&n,&m);
		for(i=0;i<(1<<n);i++)
			dp[i] = dp2[i]  = inf;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			dp[1<<i] = a;
		}
		while(m--)
		{
			int mask = 0;
			int x,q,y;
			scanf("%d%d",&x,&q);
			for(i=0;i<q;i++)
			{
				scanf("%d",&y);
				y--;
				mask = mask|1<<y;
			}
			dp[mask] = min((long long)x, dp[mask]);
		}
		int mask;
		for(mask = (1<<n) -1; mask>=0; mask--)
		{
			for(int j =0 ;j<n ;j++)
				if(mask&(1<<j))
					dp[mask^(1<<j)] = min(dp[mask^(1<<j)], dp[mask]);
		}
		dp2[0]=0;
		for(mask = 0; mask< 1<<n ; mask++)
		{
			int submask = (mask)&(mask-1);
			while(submask > 0)
			{
				dp2[mask] = min(dp2[submask] + dp[mask^submask] , dp2[mask]);
				submask = (mask)&(submask-1);
			}
			dp2[mask]=min(dp2[mask],dp[mask]);
		}
		printf("%lld\n",dp2[(1<<n) -1]);
	}
	return 0;
}

