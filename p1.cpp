#include <bits/stdc++.h>
using namespace std;
bool compare(pair<long int,long int>p1,pair<long int,long int>p2)
{
	if(p1.first==p2.first)
	{
		if(p1.second<=p2.second)
			return true;
		else
			return false;
	}
	else
		return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m,q,a,b;
		cin>>n>>m;
		priority_queue<long int,vector<long int> ,greater<long int> >p;
		vector<pair<long int,long int> >v;
		while(q--)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		sort(v.begin(),v.end(),compare);
		long int t=v[0].first;
		while()
		{

		}

	}
	return 0;
}
