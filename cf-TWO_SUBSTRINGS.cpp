#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	size_t pos,pos1;
	pos = s.find("AB",0);
	pos1 = s.find("BA",0);
	if(pos==string::npos || pos1==string::npos)
		cout<<"NO"<<endl;
	else
	{
		if(s.find("BA",pos+2)!=string::npos)
			cout<<"YES"<<endl;
		else if(s.find("AB",pos1+2)!=string::npos)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

