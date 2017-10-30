#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int arr[n];
		map<int,int>m;
		map<int,int>::iterator it;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}
		for(it=m.begin();it!=m.end();it++)
		{
			count += ((it->second)*((it->second)-1))/2;
		}
		cout<<count<<endl;
	}
	return 0;
}

