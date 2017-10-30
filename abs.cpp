#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<ll,ll>,ll>dp;
ll n,k;
ll rec(ll sum,int idx)
{
	ll res = 0;
	if(idx==sum)
		return 1;
	if(idx>sum)
		return 0;
	if(dp.find(make_pair(sum,idx))!=dp.end())
		return dp[make_pair(sum,idx)];
	if(idx>=n)
	{
		if(sum==k)
			return 1;
		return 0;
	}
	if(idx<n)
	{
		res += rec(sum+1,idx+1);
		res += rec(sum+2,idx+1);
		res += rec(sum+3,idx+1);
		res += rec(sum+4,idx+1);
		res += rec(sum+5,idx+1);
		res += rec(sum+6,idx+1);
	}
	return dp[make_pair(sum,idx)] = res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		dp.clear();
		cin>>n>>k;
		if(n>k)
		{
			cout<<"0"<<endl;
			continue;
		}
		ll ans = rec(0,0);
		ll total = pow(6,n);
		double answer = (double)ans/total;
		answer = (double)answer*100;
		ll answ = (ll)answer;
		cout<<answ<<endl;

	}
	return 0;
}