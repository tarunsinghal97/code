#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=t+1;;i++)
	{
		map<int,int>mp;
		int a = i;
		while(a!=0)
		{
			mp[a%10]=1;
			a = a/10;
		}
		if(mp.size()==4)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}