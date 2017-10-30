#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,ans;
		cin>>n;
		vector<pair<int,int> >v;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			v.push_back(make_pair(a,i));
		}
		cin>>a;
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			if(v[i].second==a)
				ans=i+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
