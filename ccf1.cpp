#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==1)
		return n;
	else
		return n*fact(n-1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,ans1,ans2,ans3,ans4;
		cin>>n>>r;
		if(n==r && n!=0)
			cout<<"1"<<endl;
		else if(n==0)
			cout<<"0"<<endl;
		else
		{
			ans1=fact(n);
			ans2=fact(n-r);
			ans3=fact(r);
			cout<<ans1<<endl<<ans2<<endl<<ans3<<endl;
			ans4=ans1/(ans2*ans3);
			cout<<ans4<<endl;
		}
	}
	return 0;
}
