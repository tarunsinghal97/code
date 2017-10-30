#include<bits/stdc++.h>
using namespace std;
int A[100001];
int tree[100000];
int lazy[1000001];
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
	build(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
void update(int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] != 0)
    { 
        tree[node] += (end - start + 1) * lazy[node];    // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }
    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        tree[node] += (end - start + 1) * val;
        if(start != end)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    update(node*2, start, mid, l, r, val);        // Updating left child
    update(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = tree[node*2] + tree[node*2+1];        // Updating root with max value 
}

int query(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return 0;         // Out of range
    if(lazy[node] != 0)
    {
        tree[node] += (end - start + 1) * lazy[node];            // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];         // Mark child as lazy
            lazy[node*2+1] += lazy[node];    // Mark child as lazy
        }
        lazy[node] = 0;                 // Reset it
    }
    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    int p1 = query(node*2, start, mid, l, r);         // Query left child
    int p2 = query(node*2 + 1, mid + 1, end, l, r); // Query right child
    return (p1 + p2);
}
int main()
{
	int n,m,ans,a,b,c;
	scanf("%d%d",&n,&m);
	build(1,1,n);
	while(m--)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a==1)
			update(1,1,n,b,c,1);
		else{
			ans = query(1,1,n,b,c);
			printf("%d\n",ans%10);
		}
	}
	return 0;
}
