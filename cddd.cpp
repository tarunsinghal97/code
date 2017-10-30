#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		map<int,int>k;
		long long int a,n,m,p,count=0,count1=0,x,f=0,c=0,arr[100010];
		scanf("%lld%lld%lld",&a,&n,&m);
		x=a;
		p=a;
		while(p!=0)
		{
			p = p/10;
			count++;
		}
		for(long long int i=m/a;i<n;i++)
		{
			k[i]=x%m;
			x=x%m;
			x=(x*pow(10,count)+a);
			c++;
			if(x%m==a%m)
			{
				n=n%c;
				break;
			}
		}
		printf("%lld\n",k[n-1]);

	}
	return 0;
}
