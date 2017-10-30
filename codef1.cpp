#include <bits/stdc++.h>
using namespace std;
int grundy(int n,int k)
{
	if(n<=k)
		return n;
	vector<int>v;
	for(int i=1;i<=k;i++)
		v.push_back(grundy(n-i,k));
	int mex=0;
	while(find(v.begin(),v.end(),mex)!=v.end())
		mex++;
	return mex;
}
int main()
{
	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	if(grundy(n1,k1)^grundy(n2,k2))
		cout<<"First"<<endl;
	else
		cout<<"Second"<<endl;
	return 0;
}
