#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,count=0,f=1,s=1,g=1;
		scanf("%d%d",&a,&b);
		while(a>0&&b>0)
		{
			if(f==1)
			{
				a += 3;
				b += 2;
				count++;
				f=0;
				s=1;
		         	g=1;
			}
			else if(s==1 && b-10>0)
			{
				a -= 5;
				b -= 10;
				count++;
				s=0;
				f=1;
				g=0;
			}
			else if(g==1)
			{
				a -= 20;
				b += 5;
				count++;
				g=0;
				s=0;
				f=1;
			}
		}
		printf("%d\n",count-1);
	}
	return 0;
}
