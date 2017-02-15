#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10],sum=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		sum += arr[i];
		if(sum>100)
		{
			if(i!=0 && (100-sum+arr[i])<(sum-100))
			{
				sum=sum-arr[i];
				break;
			}
			else
				break;
		}
		if(sum==100)
			break;
	}
	printf("%d\n",sum);
	return 0;
}

