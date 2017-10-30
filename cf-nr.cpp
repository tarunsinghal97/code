#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,ans=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=k && i+1>=k){
			ans = i;
			break;
		}
			
	}
	cout<<ans<<endl;
	return 0;
}
