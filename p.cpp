#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n,m,f=0;
	cin>>n>>m;
	char s[n][m+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>s[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='B' && i!=n-1)
			{
				if(s[i+1][j]=='A' || s[i+1][j]=='W'){
					f=1;
					break;
				}
			}
			else if(s[i][j]=='W'){
				if(j==0 || j==m-1 || i==n-1 ){
					f=1;
					break;
				}
				if(s[i][j-1]=='A' || s[i][j+1]=='A'|| s[i+1][j]=='A'){
					f=1;
					break;
				}
			}
			if(f==1)
				break;
		}
		if(f==1)
			break;
	}
	if(f==1)
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;

	}
	return 0;
}

