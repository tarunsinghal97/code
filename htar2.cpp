#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m;
	cin>>n>>m;
	ll arr[n],sum[n],ans=0;
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sum[0]=arr[0];
	for(ll i=1;i<n;i++)
		sum[i]=sum[i-1]+arr[i];
	for(ll i=0;i<n;i++)
	{
		ll l=0,r;
		if(sum[i]>m)
		{
			r = i;
		while(l<r)
		{
			ll mid = (l+r)/2;
			if(sum[mid]==(sum[i]-m))
			{
				cout<<m<<endl;
				return 0;
			}
			if(sum[mid]<sum[i]-m)
				l = mid+1;
			if(sum[mid]>sum[i]-m)
				r = mid;
		}
		ans = max(ans,sum[i]-sum[r]);
		}
		else
		{
			ans = max(ans,sum[i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}