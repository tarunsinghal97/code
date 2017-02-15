#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,f=0;
		scanf("%d",&n);
		long long int p,a;
		vector<long long int>v(n);
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			v[i]=a;
		}
		scanf("%lld",&p);
		sort(v.begin(),v.end());
		for(long long int i=0;i<p && i<n;i++)
		{
			for(long long int j=i+1;v[j]+v[i]<p && j<n;j++)
			{
				if(find(v.begin()+j+1,v.end(),p-v[i]-v[j])!=v.end())
				{
					f=1;
					break;
				}
			}
			if(f==1)
				break;
		}
		if(f==0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

