#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[3000];
	scanf("%s",s);
	int t,count=0,max=0,f;
	scanf("%d",&t);
	char ss[t][3001],c,d;
	for(int i=0;i<t;i++)
	{
		scanf("%s",ss[i]);
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='*')
		{
			for(int j=0;j<t;j++){
				f=i;
				ss[j][i]='*';
				//				printf("%s\n",ss[j]);
			}
		}

	}
	for(int i=0;i<strlen(s);i++)
	{
		count=0;
		if(i!=f)
		{
			for(int j=0;j<t;j++)
			{
				if(s[i]!='*')
				{
					c=s[i];
					s[i]='*';
					d=ss[j][i];
					ss[j][i]='*';

//					printf("%s\n",ss[j]);
				}
				if(strcmp(s,ss[j])==0)
					count++;
				s[i]=c;
				ss[j][i]=d;
			}
		}
		if(count>max){
			max=count;
		}
	}

	printf("%d\n",max);
	return 0;
}
