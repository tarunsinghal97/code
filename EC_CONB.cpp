#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k;
		scanf("%lld",&n);
		k=ceil(log(n))+1;
		//printf("%lld",k);
		if(n%2==0)
		{
			for(long long int j=0;j<k;j++)
				n=n^(1<<j);
			printf("%lld\n",n);
		}
		else
			printf("%lld\n",n);
	}
	return 0;
}
