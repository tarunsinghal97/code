#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,start,end,mid,sum,height=0;
	scanf("%lld%lld",&n,&m);
	long long int arr[n];
	for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	sort(arr,arr+n);
	start=0;
	end=arr[n-1];
	while(start<=end)
	{
		sum=0;
		mid=(start+end)/2;
		for(long long int i=0;i<n;i++)
		{
			if((arr[i]-mid)>0)
				sum += arr[i]-mid;
		}
		if(sum==m)
		{
			height=mid;
			break;
		}
		else if(sum<m)
		{
			end=mid-1;
		}
		else if(sum>m)
		{
			if(mid>height)
				height=mid;
			start=mid+1;
		}
	}
	printf("%lld\n",height);
	return 0;
}

