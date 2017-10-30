#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}
int hack(long long int i,long long int arr[],long long int n)
{
	vector<pair<long long int,long long int> >v;
	for(long long int j=0;j<n;j++)
	{
		if( j!=i && gcd(arr[i],arr[j])>1)
		{
			pair<long long int,long long int>p;
			p = make_pair(abs(i-j),j+1);
			v.push_back(p);
		}
	}
	sort(v.begin(),v.end());
	if(v.size()!=0)
		return v[0].second;
	else
		return -1;
}
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n],ans[n];
	for(long long int i=0;i<n;i++)
		cin>>arr[i];
	for(long long int i=0;i<n;i++)
	{
		ans[i] = hack(i,arr,n);
	}
	for(long long int i=0;i<n;i++)
		cout<<ans[i]<<" ";
	return 0;
}
