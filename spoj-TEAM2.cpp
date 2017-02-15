#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(long long int j=1;j<=t;j++)
	{
	long long int arr[4],ans[4],t=0;
	for(long long int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+4);
	if(arr[0]+arr[3]>=arr[1]+arr[2])
		ans[t++]=arr[0]+arr[3];
	if(arr[1]+arr[3]>=arr[0]+arr[2])
		ans[t++]=arr[1]+arr[3];
	if(arr[1]+arr[2]>=arr[0]+arr[3])
		ans[t++]=arr[1]+arr[2];
	if(arr[3]+arr[2]>=arr[1]+arr[0])
		ans[t++]=arr[3]+arr[2];
	sort(ans,ans+t);

	cout<<"Case"<<" "<<j<<":"<<" "<<ans[0]<<endl;
	}
	return 0;
}


