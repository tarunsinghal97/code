#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int arr[3],count=0;
	for(long long int i=0;i<3;i++)
	{
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+3);
	if((arr[2]-arr[1])%2==0){
			count = count + (arr[2]-arr[1])/2;
			arr[2]=(arr[2]-(2*count));
	}
	else if((arr[2]-arr[1])%2!=0){
		count = count + (arr[2]-arr[1]-1)/2;
		arr[2]=(arr[2]-(2*count));
	}
	count = count + arr[2];
	printf("%lld\n",count);
	return 0;
}


