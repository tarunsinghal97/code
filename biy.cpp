#include <bits/stdc++.h>
using namespace std;
int checkbitset(int y);
int gcd(int a[],int l);
int bitmask(int i,int n,char s[],int x,int y,int m);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char s[n];
		cin>>s;
		int m,x,y,ans,max=0;
		cin>>m>>x>>y;
		for(int i=0;i<(1<<(n-1));i++)
		{
				
			ans=bitmask(i,n,s,x,y,m);
			if(max<ans)
				max=ans;
		}
		cout<<max<<endl;
	}
	return 0;
}
int checkbitset(int y)
{
	int c=0;
	for(int i=0;i<32;i++)
	{
		if(y&(1<<i))
			c++;
	}
	return c;
}
int bitmask(int i,int n,char s[],int x1,int y,int m)
{
	n-=1;
	int a[n],prev=0,l=0,t=0,arr[n],k;
	if(x1>checkbitset(i)||y<checkbitset(i))
		return 0;
	for(int j=0;j<n;j++)
	{
		t=0;
		if(i&(1<<j))
		{
			/*char c[j-prev+2];
			int prev;
			for(int k=j;k>=prev;k--)
			{
				c[t++]=s[n-k];
			}	
			a[l++]=atoi(c);
			cout<<a[l-1]<<endl;
			prev=j+1;*/
			arr[t++]=n-j;
		}	
	}
	arr[t]=0;
	for(int j=0;j<=t;j++)
		arr[j]=arr[t-1-j];
	for(int j=0;j<=t;j++)
	{
		k=0;
		char c[arr[t]-arr[t-1]+1];
		for(int p=arr[t-1];p<arr[t];p++)
			c[k++]=s[p];
		a[l++]=atoi(c);
	}
	/*char c[n-prev];
	int x=prev;
	while(prev<=n-1)
	{
		c[prev-x-1]=s[prev+1];
		prev++;
	}       
	a[l++]=atoi(c);*/
	return gcd(a,l);	
}
int gcd(int a[],int l)
{
	int b=a[0];
	for(int i=0;i<l;i++)
	{
		b=(__gcd(b,a[i+1]));
	}
	return b;
}
