#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int>v(n);
	for(long long int i=0;i<n;i++)
		v[i]=0;
	for(long long int i=n-1;i>=0;i--)
	{
		for(long long int j=i;j>=0;j--)
		{
			if(__gcd(v[i],v[j])>1)
			{
				cout<<v[j]<<" ";
			//	v.erase(v.begin()+j);
			}
			else if(i==0)
				cout<<v[0]<<endl;
		}
	}

	return 0;
}
