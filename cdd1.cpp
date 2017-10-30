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
		int arr[n],a,p=1,time=0,f=0,count=0,count1=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]==1)
				count++;
			else
				count1++;
		}
		if(count==n || count1==n)
			printf("0\n");
		else
		{
			while(1)
			{
				f=0;
				for(int i=0;i<count;i++)
				{
					if(arr[i]!=1)
					{
						f=1;
						break;
					}
				}
				if(f==0)
					break;

				time++;
				for(int i=0;i<n-1;i++)
				{
					if(arr[i]==0&&arr[i+1]==1)
					{
						a = arr[i+1];
						arr[i+1] = arr[i];
						arr[i] = a;
						i++;
					}
				}
				//for(int i=0;i<n;i++)
				//	printf("%d ",arr[i]);
				//cout<<endl;
			}
			//cout<<endl;
			printf("%d\n",time);
		}
	}
	return 0;
}
