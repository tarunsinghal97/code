#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long int arr[m];
	vector<long long int>v;
	for(int i=1;i<=n;i++)
		v.push_back(i);
	for(int i=0;i<m;i++){
		cin>>arr[i];
		if(v.size()>arr[i])
		{
			cout<<v[arr[i]]<<" ";
			v.erase(v.begin()+arr[i]);
			

		}
		else
		{
			arr[i] = arr[i]%v.size();
			cout<<v[arr[i]]<<" ";
			v.erase(v.begin()+arr[i]);
		}
	}
	return 0;
}
