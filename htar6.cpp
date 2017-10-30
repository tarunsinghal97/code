#include <bits/stdc++.h>
using namespace std;
vector<char> v;
vector<string> v1;
bool compare2(string a,string b)
{
	int l = min(a.length(),b.length());
	for(int i=0;i<l;i++)
	{
		it = lower_bound(v.begin(), v.end(),a[i]);
		it2 = lower_bound(v.begin(), v.end(),b[i]);
		if(it>it2)
		{
			return false;
		}
	}
	return a.length<=b.length;
}
bool compare(string a,string b)
{
	if(compare2(a,b))
	{
		return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s;
		int l = s.length();
		for(int i=0;i<l;i++)
			v.push_back(s[i]);
		int m;
		cin>>m;
		while(m--)
		{
			cin>>s1;
			v1.push_back(s1);
			sort(v1.begin(),v1.end(),compare);
			for(int i=0;i<v1.size();i++)
			{
				cout<<v[i]<<endl;
			}
		}
		v.clear();
	}
	return 0;
}