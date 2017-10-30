#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>::iterator it2, it3;
void getZarr(string str);
#define ll long long int
ll dp[3000010];
ll Z[3000010];
#define mod 1000000007
string arr, brr, concat;
void search(string text, string pattern)
{
	concat = pattern + "$" + text;
	int l = concat.length();
	getZarr(concat);
	for (int i = 0; i < l; ++i)
	{
		if (Z[i] == pattern.length())
			v.push_back(i - pattern.length() -1) ;
	}
}
void getZarr(string str)
{
	int n = str.length();
	int L, R, k;
	L = R = 0;
	for (int i = 1; i < n; ++i)
	{
		if (i > R)
		{
			L = R = i;
			while (R<n && str[R-L] == str[R])
				R++;
			Z[i] = R-L;
			R--;
		}
		else
		{
			k = i-L;
			if (Z[k] < R-i+1)
				Z[i] = Z[k];
			else
			{
				L = i;
				while (R<n && str[R-L] == str[R])
					R++;
				Z[i] = R-L;
				R--;
			}
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i;
		ll l2;
		cin >> arr;
		cin >> brr;
		l2 = brr.length();
		search(arr, brr);
		it3 = v.end();
		it3--;
		for(i=v.size()-1;i>=0;i--)
		{
			it2 = lower_bound(v.begin()+i, v.end(), *it3 + l2);
			if(*it2 >= v[i]+l2)
			{
				dp[i] = (dp[i+1]%mod +1 + dp[it2 - v.begin()]%mod)%mod ;
			}
			else
				dp[i] = (dp[i+1] + 1)%mod;
			it3--;
		}
		printf("%lld\n",dp[0]);
		for(i=0;i<v.size();i++)
			dp[i]=0;
		v.clear();
	}
	return 0;
}

































