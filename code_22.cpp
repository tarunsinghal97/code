#include<bits/stdc++.h>
using namespace std;
char arr[10001];
int brr[10001];
int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",arr);
		int l,r,ans=0;
		scanf("%d%d",&l,&r);
		int len = strlen(arr);
		for(i=0;i<len;i++)
			if(arr[i]=='B')
				ans++;
		int ans1=0, ans2=0;
		ans1 = (r/len)*ans;
		for(j=0;j< r-(r/len)*len;j++)
		{
			if(arr[j] == 'B')
				ans1++;
		}
		ans1 -= (l/len)*ans;
		if(arr[l/len]=='B')
			ans1++;
		for(j=0;j< l%len; j++)
			ans1--;
		printf("%d\n",ans1);
	}
	return 0;
}
