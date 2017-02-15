#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,c,ans;
		scanf("%lld%lld%lld",&a,&b,&c);
		ans=(__gcd(b,c));
		while(ans)
		{
			printf("%lld",a);
			ans--;
		}
		printf("\n");
	}
	return 0;
}
