#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			char s[1001];
			cin>>s;
			int l=strlen(s),sum=0;
			for(int i=0;i<l;i++)
			{
				if(isalpha(s[i]))
						continue;
				else
					sum+=(s[i]-'0');
			}
			cout<<sum<<endl;
		}
	return 0;
}
