#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,r,a;
	cin>>n>>r>>a;
	vector<pair<ll,ll> >v;
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		sum+=x;
		v.push_back(make_pair(y,x));
	}
	a *= n;
	ll cnt=0;
	sort(v.begin(), v.end());
	for(ll i=0;i<n;i++)
	{
			if(sum<a)
			{
				if((r+sum-v[i].second)>=a){
					cnt+=((a-(sum))*(v[i].first));
					sum+=(a-sum);
				}
				else
				{
					cnt+=((r-v[i].second)*(v[i].first));
					sum+=(r-v[i].second);
				}
			}
			else
			{
				cout<<cnt<<endl;
				return 0;
			}
		
	}
	cout<<cnt<<endl;
	return 0;
}