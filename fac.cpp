#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int p=1;p<=t;p++)
	{
		int n,arr[200],count=0,k,l;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);
		for(int i=n-1;;i--)
		{
			if(50%arr[i]==0){
				k=50/arr[i];
			}
			if(50%arr[i]!=0)
			{
				k = (int)(50/arr[i]) +1;
			}
			if(50%arr[i-1]==0)
			{
				l=50/arr[i-1];
			}
			if(50%arr[i-1]!=0)
			{
				l=(int)(50/arr[i-1])+1;
			}
			if((n-k)<l)
			{
				count++;
				break;
			}
			count++;
			n-=k;
		}
		printf("Case #%d: %d\n",p,count);
	}
	return 0;
}


