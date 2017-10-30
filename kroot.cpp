#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,k=1;
		scanf("%lld%lld",&a,&b);
		double mid,d,l,r;
	//	ans=0;
		l=0;
		r=a;
		d=1;
		while(k<=100)
		{
			d=1;
			mid=(r+l)/2.0;
			//cout<<mid<<endl;
			for(int i=1;i<=b;i++)
				d = d*mid;
		//	cout<<d<<endl;
			if(d==a){
				r=mid;
				break;
			}
			else if(d>a)
				r=mid;
			else if(d<a)
				l=mid;
			k++;
		}
		printf("%.4lf\n",r);
	}
	return 0;
}
