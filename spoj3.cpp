#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int> >v;
map<pair<int,pair<int,int> >,int>dp;
int rec(int sum1,int sum2,int idx)
{
	if(dp.find(make_pair(sum1,make_pair(sum2,idx)))!=dp.end())
		return dp[make_pair(sum1,make_pair(sum2,idx))];
	if(idx == n)
	{
		return abs(sum1-sum2);
	}
	long long int ans = min(rec(sum1 + v[idx].first,sum2 + v[idx].second,idx+1),rec(sum1+v[idx].second , sum2 + v[idx].first,idx+1));
	return dp[make_pair(sum1,make_pair(sum2,idx))] = ans;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		// memset(dp,-1,sizeof(dp));
		dp.clear();
		scanf("%d",&n);
		v.clear();
		int a,b;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			v.push_back(make_pair(a,b));
		}
		int ans = rec(0,0,0);
		printf("%d\n",ans);
	}
	return 0;
}