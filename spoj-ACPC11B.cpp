#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n1,n2,min,c;
		cin>>n1;
		long long int arr[n1];
		for(long long int i=0;i<n1;i++)
			cin>>arr[i];
		cin>>n2;
		long long int tar[n2];
		for(long long int i=0;i<n2;i++)
			cin>>tar[i];
		min=abs(tar[0]-arr[0]);
		for(long long int i=0;i<n1;i++)
			for(long long int j=0;j<n2;j++)
			{
				c=abs(tar[j]-arr[i]);
				if(min>c)
					min=c;
			}
		cout<<min<<endl;
	}
	return 0;
}
