#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p,x;
	set<int>S;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>x;
		S.insert(x);
	}
	int p1;
	cin>>p1;
	for(int i=0;i<p1;i++)
	{
		cin>>x;
		S.insert(x);
	}
	if(S.size()==n)
	{
		cout<<"I become the guy."<<endl;
	}
	else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}