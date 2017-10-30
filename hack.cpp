#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,ans;
	cin>>x1>>y1>>x2>>y2;
	ans=min(abs(x2-x1),abs(y1-y2));
	cout<<ans<<endl;
	return 0;
}
