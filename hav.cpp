#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int cnt=1;
		while(n!=0)
		{
			if(n&1)
			{
				break;
			}
			cnt++;
		}
		cout<<cnt<<endl;

	}
}