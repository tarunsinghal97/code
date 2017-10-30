#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long long int arr[100007];
long long int brr[100007];
int main()
{
	ll n;
	scanf("%lld",&n);
	int i,k,j;
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	for(i=0;i<n;i++)
	{
		k=1;
		j = i;
		printf("%d\n",j);
		while(arr[i+1]<arr[i] && i+1<n)
		{
			i++;
			if(i>n)
				break;
			k++;
		}
		brr[j] = k;
	}
/*	for(i=0;i<n;i++)
	{
		if((brr[i]==1 && (i==0 || arr[i]==arr[i-1])) || brr[i]>1)
			continue;
		else if(brr[i]==1 && arr[i]>arr[i-1])
			brr[i] = brr[i-1]+1;
		else if(brr[i]==0)
			brr[i] = brr[i-1]-1;
	}*/
	long long int sum = 0;
	for(i=0;i<n;i++)
		printf("%d ",brr[i]);
//	printf("%lld\n",sum);
	return 0;
}
