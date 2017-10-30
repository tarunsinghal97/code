#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,string>p1,pair<int,string>p2)
{
	if(p1.first == p2.first)
	{
		if(p1.second<p2.second)
		{
			return true;
		}
		else
			return false;
	}
	else if(p1.first>p2.first)
	{
		return true;
	}
	return false;
}
int main()
{
	int n,m,a;
	cin>>n>>m;
	string s;
	vector<pair<int,string> > v;
	for(int i=0;i<n;i++)
	{
		cin>>s>>a;
		v.push_back(make_pair(a,s));
	}
	sort(v.begin(), v.end(),compare);
	for(int i=0;i<m;i++)
	{
		cout<<v[i].second<<endl;
	}
	return 0;
}