#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char s[100001];
		cin>>s;
		if(n>=0 || n<=25)
		{
			for(int i=0;i<strlen(s);i++)
			{
				if(s[i]=='.')
					s[i]=' ';
				else
				{
					if(s[i]<='z'&&s[i]>='a'){
						if(s[i]+n<='z')
							s[i]=n+s[i];
						else{
							s[i]='a'+s[i]-'z'-1+n;
						}}
					else
					{
						if(s[i]+n<='Z')
							s[i]=n+s[i];
						else{
							s[i]='A'+s[i]-'Z'-1+n;
						}
					}
				}
			}
		}
		else
		{
			for(int i=0;i<strlen(s);i++)
			{
				if(s[i]=='.')
					s[i]=' ';
				else
				{
					if(s[i]<='z'&&s[i]>='a'){
						if(s[i]+n<='z')
							s[i]=n+s[i];
						else{
							s[i]='a'+s[i]-'z'-1+n;
						}}
					else
					{
						if(s[i]+n<='Z')
							s[i]=n+s[i];
						else{
							s[i]='A'+s[i]-'Z'-1+n;
						}
					}
					if(s[i]>='a'&&s[i]<='z')
						s[i]-=32;
					else
						s[i]+=32;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
