#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	int l = s.length();
	for(int i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-1-i])
			count++;
	}
	if(count==1 || (count==0 && l%2!=0))
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}