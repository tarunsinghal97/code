#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int q;
		cin>>q;
		long long int a,b,c;
		while(q--)
		{
			cin>>a>>b>>c;
			if(b%2==0)
				cout<<b/2<<endl;
			else
			{
				if(c==a)
				{
					cout<<b/2<<endl;
				}
				else
					cout<<(b/2)+1<<endl;
			}
		}
	}
	return 0;
}
