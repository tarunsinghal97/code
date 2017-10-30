#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char arr[10000];
		int crr[27]={0};
		scanf("%s",arr);
		for(int i = 0; arr[i]!='\0';i++)
		{
			if(crr[arr[i]-'a']==0)
			{
				printf("%c",arr[i]);
				crr[arr[i]-'a']=1;
			}
		}
		printf("\n");
	}
	return 0;
}

