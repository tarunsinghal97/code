#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int arr[n],ans;
		for(long long int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		for(long long int i=1;i<n;i++)
		{
			if((arr[i]-arr[i-1])==0 || (arr[i]-arr[i-1])>=2)
			{
				if(i==n-1)
				{
					ans = arr[i];
					break;
				}
				else if((arr[i+1]-arr[i])==1)
				{
				ans = (arr[i-1]);
				break;
				}
				else if((arr[i+1]-arr[i-1])==1);
				{
					ans = arr[i];
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

