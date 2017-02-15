#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		const double Pi = acos(-1);
		int n,f;
		double ans;
		scanf("%d%d",&n,&f);
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);
		ans=(Pi*arr[n-f]*arr[n-f]);
		printf("%.4f\n",ans);
	}
	return 0;
}
