#include <bits/stdc++.h>
using namespace std;
int main()
	{
		char s[51];
		scanf("%s",s);
		if(s[0]=='?')
		{
			if(strlen(s)>1 && s[1]=='a')
				s[0]='b';
			else
				s[0]='a';
		}
		//cout<<s[strlen(s)-2];
		for(int i=1;i<strlen(s)-1;i++)
		{
			if(s[i]=='?')
			{
				if((s[i+1]=='a' && s[i-1]=='a') || (s[i-1]=='a' && s[i+1]=='?'))
					s[i]='b';
				else
					s[i]='a';
			}
		}
		if(s[strlen(s)-1]=='?')
		{
			if(s[strlen(s)-2]=='a')
				s[strlen(s)-1]=='b';
			else
				s[strlen(s)-1]=='a';
		}
		printf("%s\n",s);
		return 0;
	}
