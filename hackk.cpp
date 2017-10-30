#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[100000];
	cin >> s;
	int t;
	cin >> t;
	while(t--)
	{
		int tar[100]={0};
		int a,b,count=0;
		cin >> a >> b;
		char c[100000];
		for(int i=a-1;i<=b-1;i++)
		{
			c[i]=s[i];
		}
		for(int i=a-1;i<=b-1;i++)
		{
			tar[c[i]-97]++;
		}
		for(int i=0;i<26;i++)
		{
			if(tar[i]!=0)
			{
				if(tar[i]%2!=0)
					count++;
			}
		}
		if(count==1 || count==0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
