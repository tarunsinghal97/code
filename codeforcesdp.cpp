#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,j;
	cin>>n;
	long long int ans[100001];
	long long int tar[100001]={0};
	for(long long int i=0;i<n;i++)
	{
		cin>>j;
		tar[j]++;
	}
	ans[0]=0;
	ans[1]=tar[1];
	for(long long int i=2;i<100001;i++)
	{
		ans[i]=max(ans[i-1],ans[i-2]+tar[i]*i);
	}
	cout<<ans[100000]<<endl;
	return 0;
}
