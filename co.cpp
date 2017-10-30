#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	long long int n,q,p,vi;
	scanf("%lld%lld%lld",&n,&q,&p);
	int arr[n],f=0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int arr1[q][3],pr=1;
	for(int i=0;i<q;i++){
		int pr=1;
		for(int j=0;j<3;j++)
			scanf("%d",&arr1[i][j]);
		if(arr1[i][0]==1)
		{
			arr[arr1[i][1]-1]=arr1[i][2];
		}
		else
		{
			for(int j=arr1[i][1]-1;j<=arr1[i][2]-1;j++)
			{
				pr=pr*arr[j];
			}
			printf("%d\n",pr);
			for(int a=0;a*a<=pr;a++){
				for(int b=0;b*b<=(pr-(a*a));b++){
					for(int c=0;c*c<=(pr-(a*a)-(b*b));c++){
						for(int d=0;d*d<=(pr-(a*a)-(b*b)-(c*c));d++)
						{
							vi=((a*a)+(b*b)+(c*c)+(d*d));
							if(pr==vi)
							{
								printf("%d %d %d %d\n",a,b,c,d);
								f=1;
								break;
							}
						}
						if(f==1)
							break;
					}
					if(f==1)
						break;
				}
				if(f==1)
					break;
			}
		}
	}
}
return 0;
}
