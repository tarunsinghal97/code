#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,a,b;
		cin>>n;
		float s=0;
		vector<pair<long long int,long long int> >v;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		for(int i=0;i<n-1;i++)
		{
			s += (v[i].first*v[i+1].second)-(v[i].second*v[i+1].first);
		}
		s += (v[n-1].first*v[0].second)-(v[n-1].second*v[0].first);
		s = s/2;
		printf("%0.1f\n",abs(s));
	}
	return 0;
}
