#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if(n%2==0)
	cout<<arr[(n/2)-1]<<endl;
	else
		cout<<arr[n/2]<<endl;
	return 0;
}
