#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,sum=0,count1=0,count2=0;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
		cin>>arr[i];
	for(long long int i=0;i<32;i++)
	{
		count1=0;
		count2=0;
		for(long long int j=0;j<n;j++)
		{
			if(arr[j]&(1<<i))
				count1++;
			else
				count2++;
		}
		if(count2!=n)
			sum += (1<<i);
	}
	cout<<sum<<endl;
	return 0;
}
