#include <stdio.h>
#include <string.h>
int main()
{
	int n,k,i,a;
	scanf("%d%d",&n,&k);
	char s[n][20],s0[n][20];
	for(i=0;i<n;i++)
	{
		scanf("%s %d",s[i],&a);
		if(a==0)
		{
			strcpy(s0[i],s[i]);
		}
	}
	printf("%s\n",s0[0]);
	return 0;
}

