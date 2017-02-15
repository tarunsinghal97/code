#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		long long int n;
		scanf("%lld",&n);
		if(n%2!=0)
			printf("Case %d: %lld\n",i,n);
		else
		{
			while(n%2==0)
			{
				n=n/2;
			}
			printf("Case %d: %lld\n",i,n);
		}
	}
	return 0;
}
