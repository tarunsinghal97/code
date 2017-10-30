#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long int arr[n],sum=0;
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		sort(arr,arr+n);
		long long int tar[n];
		tar[0]=arr[0];
		for(long long int i=1;i<n;i++)
			tar[i]=arr[i]+tar[i-1];
		for(long long int i=1;i<n;i++)
		{
			sum+=(tar[i])-1;
			arr[i]=tar[i];
		}
		printf("%lld\n",sum);
	}
	return 0;
}
