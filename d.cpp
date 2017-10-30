#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,d,x,a,c;
	cin>>t>>d>>x;
	if(t==x)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		if((x-t)%d)==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			a = ((x-t)/d);
			c = (t+(a*d));
			c++;
			if(x==c)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}

		}
	}
	return 0;
}

