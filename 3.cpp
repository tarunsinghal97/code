#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll fun(ll a, ll n, ll mo) 
{
	ll p = 1;
	while (n > 0) 
	{
		if(n%2) 
		{
			p = p * a; 
			p %= mo;
		} 
		n >>= 1; 
		a *= a; 
		a %= mo;
	} 
	return p % mo;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(n<=2)
			printf("0\n");
		else
		{
			ll ans = fun(2,n-1,mod);
			printf("%lld\n",(ans%mod - 2%mod + mod)%mod);
		}
	}
	return 0;
}
