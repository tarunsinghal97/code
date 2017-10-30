#include <bits/stdc++.h>
using namespace std;
long long dp[20][2][200];
long long m;
bool check(string s1,long long num)
{
	long long k=0;
	long long cnt=0;
	cnt = stoi(s1);
	cout<<cnt<<" "<<num<<endl;
	if(abs(cnt-num)>=m)
		return 1;
	return 0;
}
long long solve(long long idx,long long tight,long long sum,string ss,string s,long long n)
{
	if(idx>=n)
	{
		return check(ss,sum);
	}
	else if(dp[idx][tight][sum]!=-1)
		return dp[idx][tight][sum];

	else if(tight==1)
	{
		long long ret=0;
		for(long long i=0;i<=s[idx]-'0';i++)
		{
			long long  sum1=sum;
			string sss=ss;
			sss+=(i+'0');
			sum1+=i;
			if(i==s[idx]-'0')
			{
				ret+= solve(idx+1,1,sum1,sss,s,n);

			}
			else
				ret+=solve(idx+1,0,sum1,sss,s,n);
		}
		dp[idx][tight][sum]=ret;
		return ret;

	}
	else
	{
		long long ret=0;

		for(long long i=0;i<=9;i++)
		{
			string sss=ss;
			long long  sum1=sum;
			sum1+=i;
			sss+=(i+'0');
			ret+=solve(idx+1,0,sum1,sss,s,n);
		}
		dp[idx][tight][sum]=ret;
		return ret;
	}
}

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof dp);
		string a;
		cin>>a;
		cin>>m;
		long long ans1=solve(0,1,0,"",a,a.length());
		cout<<ans1<<endl;     
	}

}
