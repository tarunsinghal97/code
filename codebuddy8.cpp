#include <bits/stdc++.h>
using namespace std;
int main()
{
		int s,n;
		cin>>n>>s;
		int arr[n][2];
		for(int i=0;i<n;i++)
			cin>>arr[i][0]>>arr[i][1];
		int dp[n][s+1];
		for(int i=0;i<n;i++)
			dp[i][0]=0;
		for(int i=1;i<s+1;i++)
		{
			if(arr[0][0]<=i)
				dp[0][i]=arr[0][1];
			else
				dp[0][i]=0;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<s+1;j++)
			{
				if(arr[i][0]>j)
					dp[i][j]=dp[i-1][j];
				else
					dp[i][j]=max(dp[i-1][j],arr[i][1]+dp[i-1][j-arr[i][0]]);
			}
		}
		printf("%d\n",dp[n-1][s]);
	
	return 0;
}
