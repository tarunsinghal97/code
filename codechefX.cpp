#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,ans=0,sum1=0,sum2=0,sum3=0,sum4=0;
		cin>>n;
		long long int arr[n],tar[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(i%2==0)
				sum1 += arr[i];
			else
				sum2 += arr[i];
		}
		for(long long int i=0;i<n;i++)
		{
			cin>>tar[i];
			if(i%2==0)
				sum3 += tar[i];
			else
				sum4 += tar[i];
		}
		ans = min((sum1+sum4),(sum2+sum3));
		cout<<ans<<endl;
	}
	return 0;
}



