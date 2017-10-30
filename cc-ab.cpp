#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int a,b,ans,c;
		scanf("%d%d",&a,&b);
		c=abs(a-b);
		if(c%10==9)
			ans=c-1;
		else
			ans=c+1;
		printf("%d\n",ans);
		return 0;
	}
