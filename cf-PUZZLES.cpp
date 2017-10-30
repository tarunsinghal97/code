#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,min,value;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	sort(arr,arr+m);
	min = arr[n-1]-arr[0];
	for(int i=0;i<=m-n;i++)
	{
		value = arr[i+n-1]-arr[i];
		if(min>value)
			min = value;
	}
	cout<<min<<endl;
	return 0;
}

