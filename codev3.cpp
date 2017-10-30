#include <bits/stdc++.h>
using namespace std;
//int s,l,arr[102]={-1};
int answer(int a,int k,int l,int s)
{
	if(a==l && k==s)
	{
		//cout<<"hju";
		return 0;
	}
	else if(a==l && k!=s)
	{
		return 0;
	}
	else
		return 1;
	for(int i=9;i>=0;i++)
	{
		k += i;
		a++;
		cout<<k<<" "<<a<<endl;
		if(answer(a,k,l,s))
			continue;
		else
			k -= i;
	}
	return k;
}


int main()
{
	int l,s,ans=-1;
	cin>>l>>s;
	ans = answer(0,0,l,s);
	cout<<ans<<endl;
	return 0;
}
