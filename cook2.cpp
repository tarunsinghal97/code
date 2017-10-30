#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1000100];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,k,ans;
		ll dp[100010][40]={0}, brr[100010]={0};
		scanf("%lld%lld",&n,&k);
		for(int i=1;i<=n;i++)
			scanf("%lld",&arr[i]);
		int f = ceil(log(k)/log(2));
		for(int i=1;i<=n;i++)
		{
			ll tmp = arr[i], k1=0;
			ans=INT_MAX;
			while(tmp > 0)
			{
				if(!(tmp&1))
					dp[i][k1] = dp[i-1][k1];
				else
					dp[i][k1] = i;
				k1++;
				tmp = tmp>>1;
			}
			if(arr[i]>=k)
				brr[i] = brr[i-1] + i;
			else
			{
				for(int j=0;j<f;j++)
					ans = min(ans, dp[i][j]);
				brr[i] = brr[i-1] + ans;

			}
		}
		printf("%lld\n",brr[n]);

	}
	return 0;
}
						

