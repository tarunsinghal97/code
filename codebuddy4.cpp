#include <bits/stdc++.h>
using namespace std;
int dp[1000001];
/*int rec(int n)
{
	if(dp[n]!=-1)
		return dp[n];
	if(n==0)
		return 0;
	if(n==1)
		return 0;
	if(n<=8)
		return 1;
	vector<int>v;
	v.push_back(rec(n-2));
	v.push_back(rec(n-3));
	v.push_back(rec(n-5));
	v.push_back(rec(n-7));
	dp[n]=1;
	int m=0;
	while(find(v.begin(),v.end(),m)!=v.end())
		m++;
	dp[n]=m;
	return m;
}*/
int main()
{
	int t;
	cin>>t;
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	dp[4]=1;
	dp[5]=1;
	dp[6]=1;
	dp[7]=1;
	dp[8]=1;
	for(int i=9;i<=1000000;i++)
	{
		if(!dp[i-2] || !dp[i-3] || !dp[i-5] || !dp[i-7])
			dp[i]=1;
		else
			dp[i]=0;
	}
	while(t--)
	{
		int n;
		cin>>n;
		//int ans=rec(n);
		if(dp[n])
			cout<<"Buddy"<<endl;
		else
			cout<<"Chotu"<<endl;
	}
	return 0;
}


