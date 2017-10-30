#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a = n,cnt=0,ans;
		while(a!=0)
		{
			cnt++;
			a=a/10;
		}
		long long int arr[cnt]={0};
		for(long long int i=0;i<cnt;i++)
		{
			arr[i]=1;
			ans=0;
			for(long long int j=0;j<cnt;j++)
			{
				ans = ans*10+arr[j];
			}
			if(ans>n)
			{
				arr[i]=0;
			}

		}
		ans=0;
		for(long long int j=0;j<cnt;j++)
		{
			ans = ans*10+arr[j];
		}
	//	cout<<ans<<endl;
		long long int ans1 = n/ans;
		long long int k=ans1*ans;
		printf("%lld\n",ans1+n-k);
	}
	return 0;
}
