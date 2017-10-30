#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,arr[1000]={0},brr[1000]={0},min = INT_MAX, idx, time[1000]={0};
	printf("Enter no. of processes\n");
	scanf("%d",&n);
	int f=0,cnt=0;
	for(int i=0;i<n;i++)
	{

		scanf("%d",&arr[i]);
		if(i<3)
			brr[i] = arr[i];
	}
	for(i=3;i<n;i++)
	{
		f=0;
		min = INT_MAX;
		for(j=0;j<3;j++)
			if(arr[i]==brr[j])
			{
				time[j] = i;
				f=1;
				cnt++;
				break;
			}
		for(j=0;j<3;j++)
		{
			if(min > time[j])
			{
				min = time[j];
				idx = j;
			}
		}
		if(f==0)
		{
			brr[idx] = arr[i];
			time[idx] = i;
		}
		for(j=0;j<3;j++)
			printf("%d ",brr[j]);
		printf("\n");
	}
	printf("%d\n",cnt);
	return 0;
}
