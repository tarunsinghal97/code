#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<int,int> > v;
		int n,maximum_weight,mem=0,cnt=0;
		double res =0.000000; 
		cin>>n>>maximum_weight;
		int arr[n][2];
		char c;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i][0]>>arr[i][1]>>c;
			if(c=='S')
			{
				mem += arr[i][1];
				res += arr[i][0];
				cnt++;
			}
			else
			{
				v.push_back(make_pair(arr[i][0],arr[i][1]));
			}
		}
		maximum_weight = maximum_weight - mem;
		if(maximum_weight<=0)
		{
			printf("%.4lf\n",(double)res/cnt);
			continue;
		}
		n = v.size();
		vector<pair<double,int> >dp[n];
		for(int i=0;i<n;i++)
		{
			dp[i].push_back(make_pair(res,cnt));
		}
		for(int i=1;i<maximum_weight+1;i++)
		{
			if(v[0].second<=i)
			{
				dp[0].push_back(make_pair((double)(v[0].first+res)/(cnt+1),cnt+1));
			}
			else
			{
				dp[0].push_back(make_pair(res,cnt));
			}
		}	
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<maximum_weight+1;j++)
			{
				if(v[i].second>j)
				{
					dp[i].push_back(make_pair(dp[i-1][j].first,dp[i-1][j].second));
				}
				else
				{
					if(dp[i-1][j].first>v[i].first+dp[i-1][j-v[i].second].first)
					{
						dp[i].push_back(make_pair(dp[i-1][j].first,dp[i-1][j].second));
					}
					else
					{
						double ans = (double)(v[i].first+dp[i-1][j-v[i].second].first)/(dp[i-1][j-v[i].second].second + 1);
						dp[i].push_back(make_pair(ans,dp[i-1][j-v[i].second].second + 1));
					}
				}
			}
		}
		printf("%.4lf\n",(dp[n-1][maximum_weight].first));
	}
	return 0;
}