#include <bits/stdc++.h>
using namespace std;
int segment[100],input[100];
set<int>S;
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
	segment[node] = max(segment[2*node],segment[2*node+]);
}
void update(int node, int start, int end, int idx, int val)
  {
  if(start > idx || end < idx)
  return;
  if(start==end && start == idx)
  {
  segment[node] = val;
  return;
  }
  int mid = (start+end)>>1;
  update(2*node, start, mid, idx, val);
  update(2*node+1, mid+1, end, idx, val);
  segment[node]=max(segment[2*node],segment[2*node+1]);
  }

  int query(int node, int start, int end, int l, int r)
  {
  if(start>end || start>r || end<l)
  return 0;
  if(start>=l && end<=r)
  return segment[node];
  int mid = (start+end)>>1;
  int p1 = query(2*node, start, mid, l,r);
  int p2 = query(2*node+1, mid+1,end, l,r);
  return max(p1,p2); 
  }
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,ans;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>input[i];
			S.insert(input[i]);
		}
		build(1,1,n);
		ans = S.size();
		printf("%d\n",ans);
//		for(set<int>::iterator it = S.begin();it!=S.end();it++)
//			cout << *it<<endl;
		S.clear();
	}
	return 0;
}
