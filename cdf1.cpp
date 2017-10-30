#include <bits/stdc++.h>
using namespace std;
int lucky(int i,int j,long int n);
int main()
{
	long int n,c,p,size=0,c1=0;
	cin>>n;
	p=n;
	while(p!=0)
	{
		c=p%10;
		p=p/10;
		size++;
	}
	for(int i=1;i<=size;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			c1=lucky(i,j,n);
			if(c1!=0)
				break;
		}
		if(c1!=0)
			break;
	}
	cout<<c1<<endl;
	return 0;
}
int lucky(int i,int j,long int n)
{
	int ans=0;
	static int count=0;
	for(int k=i-1;k>=0;k--)
	{
		if(j&(1<<k))
		{
			ans = ans*10+6;
		}
		else
			ans = ans*10+5;
	}
	count++;
	if(count==n)
		return ans;
	else
		return 0;
}

