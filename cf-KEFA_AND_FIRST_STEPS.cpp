#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=1,count=0;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		count=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<=arr[j])
			{
				count++;
				i++;
			}
			else
			{
				i=j-1;
				break;
			}
		}
		if(max<count+1)
			max=count+1;
		//cout<<max<<endl;
	}
	cout<<max<<endl;
	return 0;
}
