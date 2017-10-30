#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	int arr[a];
	int tar[n]={0};
	map<int,int>mp;
	for(int i=0;i<a;i++)
		cin>>arr[i];
	set<int>S;
	for(int i=0;i<a-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			int ans = abs(arr[i+1]-arr[i]);
			tar[arr[i]-1]=ans;
			mp[tar[arr[i]-1]]++;
		}
		else
		{
			int ans = n-arr[i]+arr[i+1];
			tar[arr[i]-1]=ans;
			mp[tar[arr[i]-1]]++;
		}
	}
	vector<int>v;
	int g=0;
	for(int i=0;i<n;i++)
	{
		if(mp[tar[arr[i]-1]]!=0)
		{
			g++;
			S.insert(tar[arr[i]-1]);
		}
	}
	map<int,int>ma;
	int k=0;
	if(S.size()!=g)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	for(set<int>::iterator it=S.begin();it!=S.end();it++)
		ma[(*it)]++;
	for(int i=1;i<=n;i++)
	{
		if(ma[i]==0)
			v.push_back(i);
	}
	for(int i=0;i<n;i++)
	{
		if(tar[i]!=0)
		cout<<tar[i]<<" ";
		else
		{
			cout<<v[k]<<" ";
			k++;
		}
	}
	cout<<endl;
	return 0;
}