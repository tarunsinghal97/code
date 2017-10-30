#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char w[2502],m[2502];
		scanf("%s%s",m,w);
		int count=0;
		if(strlen(m)<=strlen(w))
		{
			int j=strlen(m)+1;
			m[strlen(m)]='$';
			m[strlen(m)+1]='\0';
			strcat(m,w);
			for(int i=0;i<strlen(m);i++)
			{
				if(m[i]==m[j])
				{
					j++;
					count++;
				}
				else if(m[i]=='$')
					break;
				else{
					i--;
					j++;
				}
			}
			if(count==strlen(m))
				printf("YES\n");
			else
				printf("NO\n");
		}
		else{
			int j=strlen(w)+1;
			w[strlen(w)]='$';
			w[strlen(w)+1]='\0';
			strcat(w,m);
			for(int i=0;i<strlen(w);i++)
			{
				if(w[i]==w[j])
				{
					j++;
					count++;
				}
				else if(w[i]=='$')
					break;
				else{
					i--;
					j++;
				}
			}
			if(count==strlen(w))
				printf("YES\n");
			else
				printf("NO\n");
		}

	}
	return 0;
}

