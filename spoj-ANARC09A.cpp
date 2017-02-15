#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> st;
	char s[102];
	cin>>s;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[0]=='{')
		{
			if(s[i]=='}')
				count--;
			else if(s[i]=='{' && s[i+1]!='}')
				count++;



	}
	cout<<st.size()<<endl;
}

