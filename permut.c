#include <stdio.h>
int dp[1000000];

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void permut(int n ,int arr[],int idx)
{
	int i,j;
	if(idx==n-1)
		return;
	for(i=idx;i<n;i++)
	{
		
		swap((arr+idx),(arr+i));
		int ans=0;
		for(j=0;j<n;j++)
		{
			ans = 10*ans + arr[j];
		}
		if(dp[ans]==-1)
		{
			dp[ans]=0;
			for(j=0;j<n;j++)
				printf("%d",arr[j]);
		printf("\n");
		}
		permut(n,arr,idx+1);
		swap((arr+idx),(arr+i));
	}
}

int main()
{
	int n,i;
	for(i=0;i<1000000;i++)
		dp[i]=-1;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	permut(n,arr,0);
	return 0;
}
