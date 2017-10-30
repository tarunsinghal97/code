#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int c,d,l;
		scanf("%lld%lld%lld",&c,&d,&l);
		if((l>((4*d)+(4*c))) || l%4!=0)
			printf("no\n");
		else
		{
			if(c>d)
			{
				if(c>(2*d))
				{
					if(l>=(4*d)+((c-(2*d))*4))
						printf("yes\n");
					else
						printf("no\n");
				}
				else if(c<=(2*d)){
					if(l>=(4*d))
						printf("yes\n");
					else
						printf("no\n");
				}
			}
			else
			{
				if(l>=(4*d))
					printf("yes\n");
				else
					printf("no\n");
			}
		}
	}
	return 0;
}
