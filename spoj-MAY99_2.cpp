#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		for(long long int i=0;i<n;i++){
			if(n%5==1)
				printf("m");
			else if(n%5==2)
				printf("a");
			else if(n%5==3)
				printf("n");
			else if(n%5==4)
				printf("k");
			else if(n%5==0)
				printf("u");
			i+=4;
		}
		printf("\n");
	}
	return 0;
}
