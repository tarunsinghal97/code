#include <bits/stdc++.h>
using namespace std;
int arr[100009],segment[500009];
void build(int node, int start, int end)
{
        if(start==end)
        {
                segment[node]=arr[start];
                return;
        }
        int mid = (start+end)>>1;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        segment[node] = segment[2*node]+segment[2*node+1];
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
  	return (p1+p2); 
}
int main()
{
	string s;
	cin>>s;
	int lr  =s.length();
	int l,r;
	arr[lr] = 0;
	for(int i=1;i<lr;i++)
	{
		if(s[i-1]==s[i])
			arr[i] = 1;
	}
	build(1,1,s.length());
	int m;
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
		int ans = query(1,1,s.length(),l,r);
		if(r!=lr)
		{
			if(s[r-1] == s[r])
				ans -= 1;
		}
		cout<<ans<<endl;
	}
	return 0;
}