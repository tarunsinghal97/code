#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int arr[1000][1000];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j;
		scanf("%d",&n);
		int l,cnt, k=1;
		for(i=(n+1)/2;i>=1;i--)
		{
			cnt=1;
			int u = 1;
			for(j=k;j<=n;j++)
				arr[i][j] = cnt++;
			for(l=cnt; l<=n; l++)
				arr[i][u++] = l;
			k++;
		}
		k = (n+1)/2+1;
		int s = 0;
		for(i=(n+1)/2+1;i<=n;i++)
		{
			cnt=1;
			int u = 1;
			for(j=n-s;j<=n;j++)
				arr[i][j] = cnt++;
			for(l=cnt; l<=n; l++)
				arr[i][u++] = l;
			k++;
			s++;
		}

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				printf("%d ",arr[i][j]);
			printf("\n");
		}
	}
	return 0;
}



