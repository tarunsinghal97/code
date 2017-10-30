#include <stdio.h>
int dp[10000000];

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
				printf("%s",arr[j]+'a');
		printf(" ");
		}
		permut(n,arr,idx+1);
		swap((arr+idx),(arr+i));
	}
}

int main()
{
	int n,i;
	string s;
	for(i=0;i<10000000;i++)
		dp[i]=-1;
	cin>>s;
	int arr[n];
	int l = s.length();
	for(i=0;i<l;i++)
	{
		arr[i]=s[i]-'a';
	}
	permut(l,arr,0);
	return 0;
}