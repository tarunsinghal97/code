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
vector< pair < pair < int ,pair< int, int> >, int > > v;
set< pair<int,int> >s;
set<pair< int, int> >::iterator it,it1,it2;
map<int, int>mi;
map<int, int>m2,m1,m3;
int arr[1000101];
int main()
{
	int n,x1,x2,y1,y2,i,u1,v1,ans=0;
	si(n);
	FOR(i,0,n)
	{
		si(x1), si(y1), si(x2), si(y2);
		if(x1 > x2)
		{
			swap(x1,x2);
			swap(y1, y2);
		}
		else if((x1 == x2) && (y1 > y2))
			swap(y1,y2);
		if(x1==x2)
		{
			v.pb(mp( mp( x1,mp(2,y2)), i )) ;
			mi[i] = y1;
		}
		else 
		{
			v.pb( mp( mp(x1, mp(1,y1)),i)) ;
			v.pb( mp( mp(x2, mp(3,y2)),i)) ;
			m1[i] = x2;
			m2[i] = x1;
			m3[i] = y1;
		}
	}
	sort(all(v));
	FOR(i,0,v.size())
	{
		if(v[i].fi.se.fi == 2)
		{
			for(it=s.lower_bound(mp(mi[v[i].se], -1)); it!=s.end(); it++)
			{
				if(it->fi > (v[i].fi.se.se))
					break;
				if(mi[(v[i].se)] <= it->fi && it->fi <= (v[i].fi.se.se))
				{
					if( ((m1[it->se] == v[i].fi.fi) || (m2[it->se] == v[i].fi.fi)) && (m3[it->se] == v[i].fi.se.se || m3[it->se] == mi[v[i].se]) )
						continue;
					arr[v[i].se]++;
					arr[(it->se)]++;
					ans++;
				}
			}
			
		}
		else if(v[i].fi.se.fi == 1)
			s.insert(mp(v[i].fi.se.se , v[i].se));
		else if(v[i].fi.se.fi == 3)
		{
			it = s.upper_bound(mp(v[i].fi.se.se, -1));
			s.erase(it);
		}
	}
	printf("%d\n",ans);
	FOR(i,0,n)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
