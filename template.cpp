/*
WELCCOME!!
the_phoenixx aka "Tarun Singhal"
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define fi  first
#define se  second
#define mod 10000000007
#define sc(x) scanf("%lld",&x)
#define en printf("\n")
#define pf(x) printf("%lld",x)
const long long inf = (long long) 1e18;
#define pii pair<ll,ll>
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define TEST(t) while(t--)
#define tr(container, it)  \
for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define SPEED ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);

//-----------------------------------------------------------------------------------//
long long power(long long A, long long B, long long M)
{
    if(B == 0)
        return 1;

    if(B % 2 == 1) {
        long long x = power(A, (B-1)/2, M);
        x = (x*x) % M;
        return (x*A) % M;
    }
    else {
        long long x = power(A, B/2, M);
        return (x*x) % M;
    }
}
//----------------------------------------------------------------------------------//

long long mul(ll a,ll b)
{
	return ((a%mod)*(b%mod))%mod;
}

//-----------------------------------------------------------------------------------//

//Main code//

int main()
{
	ll t;
	sc(t);
	TEST(t)
	{
		ll n;
		sc(n);
		ll ans = (n*(n+1))/2;
		pf(ans);
		en;
	}

	return 0;
}

//------------------------------------------------------------------------------------//
//Bye...