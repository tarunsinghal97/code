#include <bits/stdc++.h>
using namespace std;
int main()
{
		int t,h=0;
		cin>>t;
		while(t--){
			char s[20][27];
			for(int i=0;i>=0;i++)
			{
				scanf("%s",s[i]);
				h++;
				if(s[i][0]==13)
					break;
			}
		for(int i=0;i<h;i++)
			cout<<s[i]<<endl;
		}
		return 0;
}

