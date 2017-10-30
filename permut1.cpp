#include <bits/stdc++.h>
using namespace std;
int memory[100][100];
int permut1(int n,int k)
{
	if(n==0)
		return 0;
	if(k==0)
		return 1;
	if(memory[n][k]!=0)
		return memory[n][k];
	int sum=0;
	for(int i=0;i<=k;i++)
	{
		if(i<=n-1)
			sum += permut1(n-1,k-i);
	}
	memory[n][k]=sum;
	return sum;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		printf("%d\n",permut1(n,k));
	}
	return 0;
}

