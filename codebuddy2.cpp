#include <bits/stdc++.h>
using namespace std;
int n;
int ans=INT_MAX;
int dp[100001];
int rec(int arr[],int s)
{
	if(dp[s]!=-1)
		return dp[s];
	if(s<0)
		return ans;
	if(s==0)
		return 0;
	for(int i=0;i<n;i++)
		ans = min(ans,rec(arr,s-arr[i]))+1;
	dp[s]=ans;
	return ans;
}
int main()
{
	int t;
	cin>>t;
//	memset(dp,-1,sizeof(dp));
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		int s;
		cin>>n>>s;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		rec(arr,s);
		cout<<dp[s]<<endl;
	}
	return 0;
}
