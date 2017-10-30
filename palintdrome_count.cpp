#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[51];
	cin>>s;
	int count=0;
	cout<<strlen(s);
	for(int i=1;i<strlen(s);i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(s[i]!=s[j])
			{
				i++;
				j=0;
			}
			else if(i==j)
				count++;
			else
			{
				i--;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
