#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	int b;
	cin>>a>>b;
	if(a<='g' && a>='b'&& b<=7 && b>=2)
	{
		cout<<"8"<<endl;
	}
	else if(a!='a' && a!='h')
		cout<<"5"<<endl;
	else if(b!=8 && b!=1)
		cout<<"5"<<endl;
	else
		cout<<"3"<<endl;
	return 0;
}
