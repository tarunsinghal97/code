#include <bits/stdc++.h>
using namespace std;
//int ispalin(char s[],int l,int r);
int main()
{
	char s[51];
	cin>>s;
	int l=strlen(s);
	int dp[l][l];
	int i,j;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
			dp[i][j]=0;
	}
	int x=0,last=0;
	for(i=0;i<l;i++)
	{	
//		for(int r=0;r<l;r++)
//			cout<<s[r];
//		cout<<endl;
			x=1;
		for(j=0;j<i+1;j++)
		{
//			if(i==4&&j==1)
//				cout<<"    "<<s[4]<<"    "<<s[1]<<"  "<<endl;
			if(s[i]==s[j]&&i!=j)
			{
				int y=j,e=i,v=0;
				while(y<=e)
				{
					if(s[y]!=s[e])
					{
						v=1;
						break;
					}
					y++;
					e--;
				}
				if(v!=1)
					x+=1;
			}
			dp[i][j]=last+x;
			last=dp[i][j];
			x=0;
		}
		last=dp[i][i];
	}
//	for(i=0;i<l;i++)
//	{
//		for(j=0;j<=i;j++)
//
//		{
//			printf("%d ",dp[i][j]);
//		}
//		cout<<endl;
//	}
	cout<<dp[l-1][l-1]<<endl;
	return 0;
}
