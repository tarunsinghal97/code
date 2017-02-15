#include <bits/stdc++.h>
using namespace std;
int power(long long int a,long long int b)
{
	int res=1;
	while(b>0)
	{
		if(b&1)
		{
			res = (a*res)%10;
		}
		b=b/2;
		a=(a*a)%10;
	}
	return res%10;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,fun,last,ans;
		scanf("%lld%lld",&a,&b);
		last=a%10;
		ans=power(last,b);
		printf("%lld\n",ans);
	}
	return 0;
}
