#include<bits/stdc++.h>
using namespace std;
int freq1[100001];
int freq2[100001];
int arr[100001];
int even[100001];
int odd[100001];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, ans=0, i;
		scanf("%d",&n);
		for(i=0;i<=100001;i++)
		{
			freq1[i]=0;
			freq2[i]=0;
			odd[i]=0;
			even[i]=0;
		}
		for(i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
			freq1[arr[i]]++;
			if(arr[i]%2==0){
				odd[i] = odd[i-1];
				even[i] = even[i-1]+1;
			}
			else{
				even[i] = even[i-1];
				odd[i] = odd[i-1] + 1;
			}
		}
		for(i=n;i>=1;i--)
		{
			freq2[arr[i]]++;
			if(arr[i]%2==0)
			{
				ans += even[i-1];
				ans -= (freq1[arr[i]] - freq2[arr[i]]);
			}
			else
			{
				ans += odd[i-1];
				ans -= (freq1[arr[i]] - freq2[arr[i]]);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
