#include <bits/stdc++.h>
using namespace std;
double n,k;
vector<pair<double,double> >v;

int rec(double sum,int i,int len)
{
	double sum1=0,sum2=0;
	if(len==k)
		return sum;
	if(i<n)
	{
		sum1 = rec(sum+(M_PI*2*v[i].second*v[i].first),i+1,len+1);
		sum2 = rec(sum,i+1,len);
		sum = max(sum1,sum2);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b;
		cin>>n>>k;
		//vector<pair<double,double> >v;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		double ans = rec(0,0,0);
		cout<<ans<<endl;
	}
	return 0;
}


