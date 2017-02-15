#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		stack<char>st;
		char s[12];
		scanf("%s",s);
		int f=0;
		for(int i=0;s[i]!='\0';i++)
			st.push(s[i]);
		for(int i=0;s[i]!='\0';i++)
		{
			if(st.top()!=s[i])
			{
				f=1;
				break;
			}
			st.pop();

		}
		if(f==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}


