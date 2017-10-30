#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,l,r;
	scanf("%lld%lld%lld",&n,&l,&r);
	long long int arr[n],count=0,a,b,tar[r+1]={0};
	for(long long int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	sort(arr,arr+n);
	vector<pair<int,int> >v(n-1);
	for(long long int i=0;i<n-1;i++)
	{
		pair<int,int>p;
		p=make_pair(arr[i+1]-arr[i],arr[i+1]+arr[i]);
		v[i]=p;
	}
	a=l;
	b=r;
	for(long long int i=0;i<n-1;i++)
	{
		/*l=a;
		r=b;
		while(l<=r)
		{
			if(v[i].first<l && l<v[i].second)
			{
				//cout<<l<<endl;
				tar[l]=1;
				l++;
			}
			else
				l++;
		}*/
		
			

	}
	for(long long int i=a;i<r+1;i++)
	{
		if(tar[i]==1)
			count++;
	}
	printf("%lld\n",count);
	return 0;
}
