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
vector< pair< int, pair<int, int> > >v;
vector< pair< int, pair<int, int> > >v1;
int arr[10010];
int main()
{
	int n,i,x1,x2,y1,y2,a1,b1,start,end;
	si(n);
	FOR(i,0,n)
	{
		si(x1),si(y1),si(x2),si(y2);
		if(x1==x2)
			v.pb(mp(x1, mp(y1,y2)));
		else
			v1.pb(mp( y1, mp(x1, x2)));
	}
	FOR(i,0,v.size())
	{
		a1 = v[i].fi;
		start = lower_bound(all(v1), a1);
		end = upper_bound(all(v1), a1);
		arr[start+1]++;
		arr[end+1]--;
	}
	return 0;
}

