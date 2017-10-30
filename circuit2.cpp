#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	bool arr[n];
	memset(arr,true,sizeof(arr));
	for(long long int i=n;i>=1;i--)
	{
		if(arr[i-1]==true)
		{
			for(long long int j=n;j>=1;j--)
			{
				if(arr[j-1]==true && __gcd(i,j)>1)
				{
					cout<<j<<" ";
					arr[j-1]=false;
				}
			}
				if(i==1)
					cout<<i<<endl;
		}
	}

	return 0;
}
