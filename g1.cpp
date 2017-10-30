#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,count=0;
		scanf("%lld%lld",&n,&k);
		for(long long int i=1;i<=n-1;i++)
		{
			for(long long int j=1;j<=n;j++)
			{
				if(i+j<=k && i<=j)
					count++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
