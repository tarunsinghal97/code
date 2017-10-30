#include <bits/stdc++.h>
using namespace std;
int XOR(int i,int n,int arr[]);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n],max=0,ans,count=0,l=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<(1<<n);i++)
		{
			ans=XOR(i,n,arr);
			if(l<ans)
				l=ans;
		}
		cout<<l<<endl;
	}
	return 0;
}
int XOR(int i,int n,int arr[])
{
	int t=0,s=0,tar[n];
	for(int j=0;j<32;j++)
	{
		if(i&(1<<j))
		{
			tar[t++]=arr[j];
		}
	}
	for(int j=0;j<t;j++)
		s = s^tar[j];
	return s;
}
