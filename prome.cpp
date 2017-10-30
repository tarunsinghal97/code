#include<bits/stdc++.h>
using namespace std;
int arr[1000010];
#define ll long long int
map<ll, ll>m;
#define M 1000000007
vector<int> p;
int a[750011];
void seive()
{
	int i,j;
	for(i=2;i*i<=750010;i++)
	{
		if(!a[i])
		{
			for(j=i*i;j<=750010;j+=i)
				a[j]=1;
		}
	}
	p.push_back(1);
	for(i=2;i<=750010;i++)
		if(!a[i])
			p.push_back(i);
}
int main()
{
	int t;
	scanf("%d",&t);
	seive();
//	for(int k  =0;k<10;k++)
//		printf("%d\n",p[k]);
	while(t--)
	{
		int n,i,j;
		ll ans = 0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);
		ll b = 0;
		for(i=0;i<n;i++)
		{
			j=0,b=0;
			while(p[j]*p[j]<=arr[i])
			{
				if(arr[i]%p[j]!=0)
				{
					j++;
					continue;
				}
//				printf("p %d\n",p[j]);
				b = ((b%M)+(m[p[j]]%M))%M;
				if(p[j]*p[j]!=arr[i])
					b = ((b%M)+(m[arr[i]/p[j]]%M))%M;
				j++;
			}
			m[arr[i]] = ((m[arr[i]]%M)+((b+1)%M))%M;
		}
		for(i=0;i<n;i++)
			ans = (ans%M + m[arr[i]]%M)%M;
		printf("%lld\n",ans%M);
		m.clear();
	}
	return 0;
}



