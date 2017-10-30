#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int n,x;
	cin>>n>>x;
	int arr[n+1];
	int cnt=0;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	for(int i=0;i<x;i++)
	{
		if(mp[i]==0)
		{
			cnt++;
		}
	}
	if(mp[x]!=0)
	{
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}