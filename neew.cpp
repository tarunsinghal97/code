#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m;
	cin>>n>>m;
	vector<ll>v;
	ll f=0,sum=0;
	int arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	ll prev = ((n-1)*(n-1+1)/2);
	for(ll i=1;i<n;i++)
	{
		//cout<<prev<<" "<<((n-i-1)*(n-i)/2)<<endl;
		if(m<=prev && m>((n-i-1)*(n-i)/2))
		{
			f=i-1;
			break;
		} 
		prev = ((n-i-1)*(n-i)/2);
	}
	sum = ((n-f-2)*(n-f-1)/2);
	 m -= sum;
	 cout<<m<<endl;	
	 cout<<f<<" "<<sum<<endl;
	for(ll i=f+1;i<n;i++)
	{
		v.push_back(abs(arr[i]-arr[f]));
	}
	sort(v.begin(), v.end());
	cout<<v[m-1]<<endl;
	return 0;
}