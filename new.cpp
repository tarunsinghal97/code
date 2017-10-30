#include<bits/stdc++.h>
using namespace std;
int arr[5005][5005];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, count=0, idx=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++){
				scanf("%d",&arr[i][j]);
				if(arr[i][j])
					count++;
			}
		}
		if(count <= n){
			printf("0\n");
			continue;
		}
		count -= n;
		for(int i = 1; i <= n; i++)
		{
			if(count - 2*(n-i) <= 0){
				idx++;
				break;
			}
			idx++;
			count -= (2*(n-i));
		}
		printf("%d\n",idx);
	}
	return 0;
}
