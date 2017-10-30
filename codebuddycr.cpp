#include <bits/stdc++.h>
using namespace std;
int x,y;
int tar[]={1,2,3,5};
int rec(int sum1,int sum2,int count,int f)
{
	if(sum1==x || sum2==y)
		return count;
	if(f!=0)
	{
		for(int i=0;i<4;i++)
		{
			if(x>=tar[i])
			{
				sum1 += tar[i];
				count+=rec(sum1,sum2,count+1,2);
			}
		}
	}
	if(f!=1)
	{
		for(int i=0;i<4;i++)
		{
			if(y>=tar[i])
			{
				sum2+=tar[i];
				count+=rec(sum1,sum2,count+1,2);
			}
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
		cin>>x>>y;
		int ans1=rec(0,0,0,0);
		int ans2=rec(0,0,0,1);
		cout<<ans1+ans2<<endl;
	}
	return 0;
}
