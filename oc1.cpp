#include <bits/stdc++.h>
using namespace std;
int palindrome(int j,int l,char s[]);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ans=0,l,a;
		char s[20];
		cin>>s;
		l = strlen(s);
		for(int i=1;i<(1<<l);i++)
		{
			a = palindrome(i,l,s);
			ans = ans + a;
		}
		cout<<ans<<endl;
	}
}
int palindrome(int j,int l,char s[])
{
	char c[20];
	int t=0,f=0;
	for(int i=0;i<l;i++)
	{
		if(j&(1<<i))
			c[t++]=s[l-i-1];
	}
	for(int i=0;i<t;i++)
	{
		if(c[i]!=c[t-1-i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
		return 0;
	else
		return 1;
//	cout<<c[i]<<" ";

}

