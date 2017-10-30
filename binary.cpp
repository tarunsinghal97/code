#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[1000]={0},t,k=0,tar[1000]={0};
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
	while(n)
	{
		arr[k++] = n&1;
		n=n>>1;
	}
	for(int i = k-1; i >=0 ;i--)
		tar[i]=arr[i];
	}

	return 0;
}
