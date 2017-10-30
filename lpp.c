#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int p1,p2,t,p;
		double ans1,ans2,ans3;
		scanf("%d%d%d%d",&p1,&p2,&t,&p);
		ans1 = log((float)p/p1);
		ans2 = log((float)p2/p1);
		ans3 = ((float)ans1/ans2)*t;
		printf("Scenario #%d: %.2lf\n",i,ans3);
	}
	return 0;
}
