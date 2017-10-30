#include<bits/stdc++.h>
using namespace std;
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
vector<int>v;
vector<int>::iterator it2;
void getZarr(string str, int Z[]);
#define ll long long int
set<int>s;
set<int>::iterator it3;
vector<int>v2;
void search(string text, string pattern)
{
	string concat = pattern + "$" + text;
	int l = concat.length();
	int Z[l];
	getZarr(concat, Z);
	for (int i = 0; i < l; ++i)
	{
		if (Z[i] == pattern.length())
			v.push_back(i - pattern.length() -1) ;
	}
}
void getZarr(string str, int Z[])
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
		ll cnt=1,i;
		ll dp[10000]={0};
		int l1,l2, prev=0;
		string arr;
		string brr;
		cin >> arr;
		cin >> brr;
		l1 = arr.length();
		l2 = brr.length();
		search(arr, brr);
		tr(v, it)
		{
			if(it == v.begin())
			{
				cnt *= 2;
				prev = *it;
			}
			else if(*it >= prev+l2)
			{	
				printf("hello\n");
				tr(s, it1)
					v2.push_back(*it1);
				it3 = s.end();
				it3--;
				for(i=v2.size()-1;i>=0;i--)
				{
					it2 = lower_bound(v2.begin()+i, v2.end(), *it3 + l2);
					if(it2 != v2.end())
					{
						dp[i] = dp[i+1]+1 + dp[it2 - v2.begin() + 1];
					}
					else
						dp[i] = dp[i+1] + 1;
					it3--;
				}
				prev = *it;
				if(dp[0])
					cnt/=2;
				cnt *= 2;
				cnt *= (dp[0]+1);
				for(i=0;i<s.size();i++)
					dp[i]=0;
				s.clear();
				v2.clear();
			}
			else
			{
				s.insert(*it);
				s.insert(prev);
				prev = *it;
			}
		}
		tr(s, it1)
			v2.push_back(*it1);
		it3 = s.end();
		it3--;
		for(i=v2.size()-1;i>=0;i--)
		{
			it2 = lower_bound(v2.begin()+i, v2.end(), *it3 + l2);
			if(*it2 >= *it3 + l2)
				dp[i] = dp[i+1]+1 + dp[it2 - v2.begin()];
			else
				dp[i] = dp[i+1] + 1;
			it3--;
		}
		if(dp[0])
			cnt/=2;
		cnt *= (dp[0]+1);
		for(i=0;i<s.size();i++)
			dp[i]=0;
		s.clear();
		v2.clear();
		printf("%lld\n",cnt-1);	
		v.clear();
	}
	return 0;
}

































