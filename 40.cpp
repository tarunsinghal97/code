// Template by [thunder_blade]
// IIIT ALLAHABAD
// includes :)

#include<bits/stdc++.h>
using namespace std;

#define TEST  int test_case; cin>>test_case; while(test_case--)
#define all(v) (v).begin(),(v).end()
#define fi  first
#define se  second
#define pb push_back
#define mp make_pair
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
#define pi(x) printf("%d",x)
#define pf(x) printf("%f",x)
#define ps(x) printf("%s",x)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pis(x) printf("%d ",x)
#define pfs(x) printf("%f ",x)
#define pss(x) printf("%s ",x)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define MOD 1000000007
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define  pp pair< char, pair<int, int> >
vector< pair< char, pair<int, int> > >v;
bool cmp(pp &a , pp &b)
{
	return  (a.se.fi < b.se.fi);
}
int main()
{
	char ty,i;
	int n,x,y;
	si(n);
	int kx, ky;
	si(kx), si(ky);
	FOR(i,0,n)
	{
		scanf("%c%d%d",&ty, &x, &y);
		v.pb( mp( ty, mp(x,y) ) );
	}
	sort(all(v), cmp);
	return 0;
}
