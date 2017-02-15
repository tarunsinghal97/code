#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,y,z,a,n,d;
		scanf("%lld%lld%lld",&x,&y,&z);
		n = (2*z)/(x+y);
		d = (y-x)/(n-5);
		a = x-(2*((y-x)/(n-5)));
		printf("%lld\n",n);
		for(long long int i=1;i<=n;i++)
		{
			printf("%lld ",a+(i-1)*d);
		}
		printf("\n");
	}
	return 0;
}
