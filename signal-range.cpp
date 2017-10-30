#include <bits/stdc++.h>
using namespace std;
long long BIT[500004];
#define N 500004
void update(long long idx,long long val)
{
	while(idx<N)
	{
		BIT[idx]+=val;
		idx+=idx&-idx;
	}
}
long long query(long long idx)
{
	long long sum=0;
	while(idx>0)
	{
		sum += BIT[idx];
		idx -= idx&-idx;
	}
	return sum;
}
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		for(long long i=1;i<500003;i++)
			BIT[i]=0;
		string s;
		cin>>s;
		for(long long i=0;i<s.length();i++)
		{
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			{
				update(i+1,1);
			}
		}
		long long cnt=0;
		for(long long i=0;i<s.length();i++)
		{
			if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
			{
				cnt += query(i);
			}
			else
			{
				long long a = i-query(i);
				cnt+=a;
			}
	
		}
		cout<<cnt<<endl;
	}
}