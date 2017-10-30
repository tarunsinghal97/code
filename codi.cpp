#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n],cnt=0;
	vector<int>v;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			cnt++;
			v.push_back(i+1);
				arr[i+1]=arr[i+1]*(-1);
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}
