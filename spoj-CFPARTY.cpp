#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n==1 || n==0)
			printf("0\n");
		else
			printf("%d\n",n-2);
	}
	return 0;
}
