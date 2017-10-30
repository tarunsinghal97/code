#include <bits/stdc++.h>
using namespace std;
int input[60000],segment[900000];
void build(int node, int start, int end)
{
        if(start==end)
        {
                segment[node]=input[start];
                return;
        }
        int mid = (start+end)>>1;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        segment[node] = max(segment[2*node],segment[2*node+1]);
}


  int query(int node, int start, int end, int l, int r)
  {
  if(start>end || start>r || end<l)
  return INT_MIN;
  if(start>=l && end<=r)
  return segment[node];
  int mid = (start+end)>>1;
  int p1 = query(2*node, start, mid, l,r);
  int p2 = query(2*node+1, mid+1,end, l,r);
  return max(p1,p2); 
  }

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		scanf("%d",&input[i]);
	}
	build(1,1,n);
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		cout<<query(1,1,n,l,r)<<endl;
	}
	return 0;
}