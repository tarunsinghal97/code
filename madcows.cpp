#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,c;
		scanf("%lld%lld",&n,&c);
		long long int arr[n];
		for(long long int i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		sort(arr,arr+n);



