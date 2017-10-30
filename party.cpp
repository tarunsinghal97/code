#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	char arr[n+1];
	scanf("%s",arr);
	int count=0,countv=0,countw=0,countwf=0;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]!='v' && arr[i]!='w')
		{
			count++;
			count += countv/2 + countw;
			count += ((countv+1)/2 - countv/2);
			countv = 0;
			countw = 0;
		}
		else if(arr[i]=='v')
			countv++;
		else{
			countwf++;
			countw++;
		}
	}
	int ans = strlen(arr);
	count += countv/2 + countw;
	count += ((countv+1)/2 - countv/2);
	printf("%d %d\n",count,ans+countwf);
	return 0;
}
