#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a1,b1,c1,a2,b2,c2,a3,b3,c3,sum[6]={0},min=0;
		scanf("%d%d%d%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
		sum[0] = a1+b1+c1;
		sum[1] = a2+b2+c2;
		sum[2] = a3+b3+c3;
		sum[3] = a1+a2+a3;
		sum[4] = b1+b2+b3;
		sum[5] = c1+c2+c3;
		for(int i = 0; i<6; i++)
		{
			if(min < sum[i] && sum[i]%2>0)
				min = sum[i];
		}
		printf("%d\n",min);
	}
	return 0;
}

