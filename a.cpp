#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans = INT_MAX;
	char arr[100];
	char brr[100];
	int drr[27]={0};
	int crr[27]={0};
	scanf("%s",arr);
	int n,i,j,count=0;
	scanf("%d",&n);
	for(i=0;arr[i]!='\0';i++)
		drr[arr[i]-'a']++;
	for(i=0;i<n;i++)
	{
		crr[27]={0};
		scanf("%s",brr);
		for(j =0;brr[j]!='\0';j++)
			crr[brr[j]-'a']++;
		for(j=0;brr[j]!='\0';j++)
			ans = min(ans,min(drr[brr[j]-'a'],crr[brr[j]-'a']));
	}
	printf("%d\n",ans);
	return 0;
}
