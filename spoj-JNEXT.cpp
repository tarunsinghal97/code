#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,number=0,number2=0;
		cin>>n;
		long int arr[n];
		for(long int i=0;i<n;i++){
			cin>>arr[i];
			number=arr[i]*(pow(10,n-1-i))+number;
		}
		next_permutation(arr,arr+n);
		for(long int i=0;i<n;i++)
			number2=arr[i]*(pow(10,n-1-i))+number2;
		if(number2<=number)
			cout<<"-1"<<endl;
		else
			cout<<number2<<endl;
	}
	return 0;
}
