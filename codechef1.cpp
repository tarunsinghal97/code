#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[10000001];
map<ll, ll>ans;
map<ll, ll>::reverse_iterator it;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,q,i,m,j,l1=0,l2=0;
		scanf("%lld%lld",&n,&q);
		for(i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		for(i=0;i<n;i++)
		{
			l1=0,l2=0;
			for(j=i;j>=0;j--)
			{
				if(arr[j]>arr[i])
					break;
				l1++;
			}
			for(j=i+1;j<n;j++)
			{
				if(arr[j]>arr[i])
					break;
				l2++;
			}
			ans[arr[i]] += (l1+l2+(l1-1)*l2);
		}
		while(q--)
		{
			it = ans.rbegin();
			scanf("%lld",&m);
			while(1)
			{
				m -= ans[it->first];
				if(m<=0)
				    break;
				it++;
			}
			printf("%lld\n",it->first);
		}
		ans.clear();
	}
	return 0;
}
