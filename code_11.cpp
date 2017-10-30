#include<bits/stdc++.h>
using namespace std;
map<string, int>ma;
char arr[100001];
int main()
{
	scanf("%s",arr);
	int l = strlen(arr);
	int i,count=0;
	for(i=0;i<l;i++)
		arr[l+i] = arr[i];
	for(i=0;i<l;i++)
	{
		char str[1000];
		strncpy(str,arr+i,l);
		ma[str]++;
	}
	for(map<string,int>::iterator it = ma.begin();it!=ma.end();it++)
		count++;
	printf("%d\n",count);
	return 0;
}
