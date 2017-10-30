#include<bits/stdc++.h>
using namespace std;
char arr[4000];
char brr[4000];
int ans[4000];
int main()
{
	scanf("%s",arr);
	int n,i,count=0,idx,tmp=0;
	scanf("%d",&n);
	while(n--)
	{
		count=0;
		scanf("%s",brr);
		for(i=0;i<strlen(brr);i++)
		{
			if(arr[i]=='*')
				continue;
			if(arr[i]!=brr[i])
			{
				idx = i;	
				count++;
			}
		}
		if(count==0)
			tmp++;
		if(count==1)
			ans[idx]++;
	}
	int goal = ans[0];
	for(i=0;i<strlen(arr);i++)
		goal = max(ans[i], goal);
	printf("%d\n",goal+tmp);
	return 0;
}
