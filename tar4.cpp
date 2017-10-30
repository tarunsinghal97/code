#include <bits/stdc++.h>
using namespace std;
int segment[10000],arr[28],tar[28];
void build(int node, int start, int end)
{
	if(start==end)
	{
		segment[node]=tar[start];
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
	int cnt=0;
	for(int i=0;i<26;i++)
		cin>>arr[i];
	string s;
	cin>>s;
	int l = s.length();
	vector<int> v[26];
	for (int i = 0; i < l; i++)
	{
		tar[i+1] = arr[s[i]-'a'];
		v[s[i]-'a'].push_back(i+1);
	}
	build(1,1,l);
	for (int i = 0; i < 26; i++)
	{
		if(v[i].size()>=2)
		{
			for(int j=0;j<v[i].size()-1;j++)
			{
				if(v[i][j+1]-v[i][j]==1)
					cnt++;
				else if(query(1,1,l,v[i][j],v[i][j+1])-arr[v[i][j]+1]-arr[v[i][j+1]+1]==0)
				 	cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}