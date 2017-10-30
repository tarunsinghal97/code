#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
	ll data;
	int low;
	int high;
	int ty;
	int idx;
};
struct node arr[1000010];
ll b[1000010];
ll ans[1000010];
bool compare(struct node a, struct node b1)
{
	if(a.data < b1.data)
		return true;
	else if(a.data == b1.data)
	{
		if(a.low < b1.low)
			return true;
		if(a.low == b1.low)
			return a.high <= b1.high;
		return false;
	}
	return false;
}

void build(int node, int start, int end)
{
	if(start == end)
	{
		b[node] = 1;
		return;
	}
	int mid = (start+end)>>1;
	build(2*node,start, mid);
	build(2*node+1,mid+1,end);
	b[node] = b[2*node] + b[2*node+1];

}


void update(int node, int start, int end, int idx)
{
	if(start>idx || end<idx)
		return;
	if(start == idx && end == idx)
	{
		b[node] = 0;
		return;
	}
	int mid = (start+end)>>1;
	if(idx <= mid)
		update(2*node,start, mid,idx);
	else
		update(2*node+1,mid+1,end,idx);
	b[node] = b[2*node] + b[2*node+1];
}

ll query(int node, int start, int end, int l, int r)
{
	if(start>end || start>r || end<l)
		return 0;
	if(start>=l && end <=r)
		return b[node];
	int mid = (start+end)>>1;
	ll p1 = query(2*node,start,mid,l,r);
	ll p2 = query(2*node+1,mid+1,end,l,r);
	return (p1+p2);
}

int main()
{
	ll a;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a);
		arr[i].data = a;
		arr[i].idx = i;
		arr[i].low = arr[i].high = arr[i].ty = 0;
	}
	build(1,1,n);
	int q,a1;
	scanf("%d",&q);
	int  b1;
	ll c;
	for(j=i;j<q+i;j++)
	{
		scanf("%d%d%lld",&a1,&b1,&c);
		arr[j].low = a1;
		arr[j].high = b1;
		arr[j].data = c;
		arr[j].idx = j-i;
		arr[j].ty = 1;
	}
	sort(arr, arr+n+q, compare);
	for(i=0;i<n+q;i++)
	{
		if(arr[i].ty == 1)
		{
			ans[arr[i].idx] = query(1,1,n,arr[i].low, arr[i].high);
		}
		else
			update(1,1,n,arr[i].idx + 1);
	}
	for(i=0;i<q;i++)
		printf("%lld\n",ans[i]);
	return 0;
}
		
