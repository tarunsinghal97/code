#include <bits/stdc++.h>
using namespace std;
int main()
{
	int f=0;
	char s[4][5];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			cin>>s[i][j];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(s[i][j]=='.')
			{
				if(j==0 && i<2)
				{
					if((s[i][j+1]=='x' && s[i][j+2]=='x') || (s[i+1][j]=='x' && s[i+2][j]=='x') || (s[i+1][j+1]=='x' && s[i+2][j+2]=='x'))
					{
						f=1;
						break;
					}
				}
				if(j==3 && i>2)
				{
					if((s[i][j-1]=='x' && s[i][j-2]=='x') || (s[i-1][j]=='x' && s[i-2][j]=='x') || (s[i-1][j-1]=='x' && s[i-2]    [j-2]=='x'))
					{
						f=1;
						break;
					}
				}
				if(j==1 && i>2)
				{
					if((s[i][j+1]=='x' && s[i][j+2]=='x') || (s[i+1][j]=='x' && s[i+2][j]=='x') || (s[i+1][j+1]=='x' && s[i+2]    [j+2]=='x'))
					{
						f=1;
						break;
					}

			}
			}
			if(f==1)
				break;
		}
	}
	if(f==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;


	return 0;
}

