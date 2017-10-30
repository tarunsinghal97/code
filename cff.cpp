#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,si;
	scanf("%d",&t);
	while(t--){
		char s[100];
		scanf("%s",s);
		si = strlen(s);
		if(strlen(s)<=10)
			printf("%s\n",s);
		else
		{
			printf("%c%d%c\n",s[0],si-2,s[si-1]);
		}
	}
	return 0;
}
