#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int arr[n],ans[n];
		for(long long int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		for(long long int i=0;i<=n-k;i++){
		ans[i]=(arr[k+i-1]-arr[i]);
		}
		sort(ans,ans+n-k+1);
		cout<<ans[0]<<endl;
	}
	return 0;
}
