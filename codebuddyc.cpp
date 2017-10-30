#include <bits/stdc++.h>
using namespace std;
int x,y;
int rec(int a,int b,int count,int f)
{
	cout<<"jd";
	if(a==x &&  b!=y)
		return count;
	if(a!=x && b==y)
		return count;
	if(a==x && b==y)
		return count;
	if(f!=0)
	{
		for(int i=1;i<=x;i++)
		{
			rec(i,b,count+1,2);
			for(int j=1;j<=y;j++)
				rec(a,j,count+1,2);
			cout<<"js";
		}
	}
	if(f!=1)
	{
		for(int i=1;i<=y;i++)
		{
			rec(a,i,count+1,2);
			for(int j=1;j<=x;j++)
				rec(i,b,count+1,2);
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//	int x,y;
		cin>>x>>y;
		int ans=rec(0,0,0,1);
		int ans1 = rec(0,0,0,0);
		cout<<ans+ans1<<endl;
	}
	return 0;
}

