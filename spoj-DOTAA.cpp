#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int arr[a],ans=0,j=a;
		for(int i=0;i<a;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+a,greater<int>());
		if(arr[0]==c)
			printf("NO\n");
		else{
			for(int i=0;i<a;i++)
			{
				if(arr[i]<c)
				{
					j=i;
					break;
				}
			}
			for(int i=0;i<j;i++)
			{
				if(arr[i]%c==0)
				{
					ans=ans+(arr[i]/c) -1;
				}
				else
					ans=ans+(arr[i]/c);
			}
			if(ans>=b)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
