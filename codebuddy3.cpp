#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n],tar[n];
		for(int i=0;i<n;i++)
			tar[i]=1;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(arr[j]<arr[i])
					tar[i]=max(tar[i],tar[j]+1);;
			}
		}
		sort(tar,tar+n);
		cout<<tar[n-1]<<endl;
	}
	return 0;
}
