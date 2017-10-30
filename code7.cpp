#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll tree2[1000005];
ll tree[1000005];
ll arr[1000005];
ll fun2(ll val)
{
	ll i = 0;
	while((val%2)==0 && val > 0)
	{
		i++;
		val /= 2;
	}
	return i;
}
ll fun1(ll val)
{
	ll i = 0;
	while((val%5)==0 && val>0)
	{
		i++;
		val /= 5;
	}
	return i;
}
void build(int node, int start, int end)
{
	if(start == end)
	{
		tree[node] = fun1(arr[start]);
		tree2[node] = fun2(arr[start]);
		return;
	}
	else
	{
		ll mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1,end);
		tree[node] = tree[2*node] + tree[2*node+1];
		tree2[node] = tree2[2*node] + tree2[2*node+1];
	}
}

void update1(int node, int start, int end, int l, int r,ll val)
{
	if(start > end || start > r || end < l)
		return;
	if(start==end)
	{
		tree[node] = tree[node] + fun1(val);
		tree2[node] = tree2[node] + fun2(val);
		return ;
	}
	ll mid = (start+end)/2;
	update1(2*node, start, mid, l, r, val);
	update1(2*node+1, mid+1, end, l, r, val);
	tree[node] = tree[2*node] + tree[2*node+1];
	tree2[node] = tree2[2*node] + tree2[2*node+1];
}

void update2(int node, int start, int end, int l, int r,ll val)
{
	if(start > end || start > r || end < l)
		return;
	if(start==end)
	{
		tree[node] = fun1((start-l+1))+fun1(val);
		tree2[node] = fun2((start-l+1))+fun2(val);
		return ;
	}
	int mid = (start+end)/2;
	update2(2*node, start, mid, l, r, val);
	update2(2*node+1, mid+1, end, l, r, val);
	tree[node] = tree[2*node] + tree[2*node+1];
	tree2[node] = tree2[2*node] + tree2[2*node+1];
}

ll query1(int node, int start, int end, int l, int r)
{
	if(start > end || start > r || end < l)
		return 0;
	if(l<=start && end <=r)
		return tree[node];
	int mid = (start+end)/2;
	ll p1 = query1(2*node, start, mid, l, r);
	ll p2 = query1(2*node+1, mid+1, end, l, r);
	return (p1+p2);
}
ll query2(int node, int start, int end, int l, int r)
{
	if(start > end || start > r || end < l)
		return 0;
	if(l<=start && end <=r)
		return tree2[node];
	int mid = (start+end)/2;
	ll p1 = query2(2*node, start, mid, l, r);
	ll p2 = query2(2*node+1, mid+1, end, l, r);
	return (p1+p2);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,m;
		scanf("%lld%lld",&n,&m);
		ll i,l,r,ty,x,y;
		for(i=1;i<=n;i++)
			scanf("%lld",&arr[i]);
		build(1,1,n);
		ll ans1 = 0, ans2 = 0, ans = 0;
		while(m--)
		{
			scanf("%lld%lld%lld",&ty,&l,&r);
			if(ty==1)
			{
				scanf("%lld",&x);
				update1(1,1,n,l,r,x);

			}
			if(ty==2)
			{
				scanf("%lld",&y);
				update2(1,1,n,l,r,y);
			}
			if(ty==3)
			{
				ans1 = query1(1,1,n,l,r);
				ans2 = query2(1,1,n,l,r);
				ans += min(ans1, ans2);
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
		
