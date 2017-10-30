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
int tree[1000001][3];
int arr[1000010];
int lazy[20001001];
void create(int node, int start, int end)
{
	if(start==end)
	{
		tree[node][arr[start]%3]++;
		return ;
	}
	else
	{
		int mid = (start+end)>>1;
		create(2*node, start,mid);
		create(2*node+1, mid+1, end);
		tree[node][0] = tree[2*node][0] + tree[2*node+1][0];			       tree[node][1] = tree[2*node][1] + tree[2*node+1][1];
		tree[node][2] = tree[2*node][2] + tree[2*node+1][2];

	}
}

void update(int node, int start, int end, int l, int r)
{
	if(lazy[node]!=0)
	{
		int ans = lazy[node];
		if(ans%3==1)
		{
			int tmp = tree[node][0];
			tree[node][0] = tree[node][2];
			tree[node][2] = tree[node][1];
			tree[node][1] = tmp;
		}
		else if(ans%3==2)
		{
			int tmp = tree[node][0];
			tree[node][0] = tree[node][1];
			tree[node][1] = tree[node][2];
			tree[node][2] = tmp;
		}
		if(start!=end)
		{
			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];
		}
		lazy[node]=0;
	}
	if(start>end || start>r || end<l)
		return;
	if(start>=l && end<=r)
	{
		int tmp = tree[node][0];
		tree[node][0] = tree[node][2];
		tree[node][2] = tree[node][1];
		tree[node][1] = tmp;
		if(start!=end)
		{
			lazy[2*node] +=1;
			lazy[2*node+1] += 1;
		}
		return;
	}
	else
	{
		int mid = (start+end)/2;
		update(2*node, start, mid, l, r);
		update(2*node+1, mid+1, end, l, r);
		tree[node][0] = tree[2*node][0] + tree[2*node+1][0];			       tree[node][1] = tree[2*node][1] + tree[2*node+1][1];
		tree[node][2] = tree[2*node][2] + tree[2*node+1][2];
	}
}

int query(int node, int start, int end, int l, int r)
{
	if(start > end || start>r || end <l)
		return 0;
	if(lazy[node]!=0)
	{
		int ans = lazy[node];
		if(ans%3==1)
		{
			int tmp = tree[node][0];
			tree[node][0] = tree[node][2];
			tree[node][2] = tree[node][1];
			tree[node][1] = tmp;
		}
		else if(ans%3==2)
		{
			int tmp = tree[node][0];
			tree[node][0] = tree[node][1];
			tree[node][1] = tree[node][2];
			tree[node][2] = tmp;
		}
		if(start!=end)
		{
			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];
		}
		lazy[node]=0;
	}
	if(start>=l && end<=r)
		return tree[node][0];
	int mid = (start+end)>>1;
	int p1 = query(2*node, start, mid, l, r);
	int p2 = query(2*node+1, mid+1, end, l, r);
	return (p1+p2);
}

int main()
{
	SPEED
	int n,q;
	si(n), si(q);
	create(1,1,n);
	while(q--)
	{
		int ty, a,b;
		scanf("%d%d%d",&ty, &a, &b);
		if(ty==0)
			update(1,1,n,a+1,b+1);
		else
			printf("%d\n", query(1,1,n,a+1,b+1));
	}
	return 0;
}
