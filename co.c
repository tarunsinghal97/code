#include <stdio.h>
int rec(int arr[],int i,int n,int k ,int count,int sum)
{
	int res=0;
	if(count==k && sum>=40)
		return 1;
	if(i<n && i>=0)
	{
		sum += arr[i];
			res += rec(arr,i+1,n,k,count+1,sum);
			res += rec(arr,i+1,n,k,count,sum-arr[i]);
	}
	return res;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int arr[n],i;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		int ans = rec(arr,0,n,k,0,0);
		printf("%d\n",ans);
	}
	return 0;
}
