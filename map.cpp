#include<bits/stdc++.h>
using namespace std;
map< string , int> m;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string str="";
		cin>>str;
		if(m[str]==0){
			m[str]++;
			printf("OK\n");
		}
		else{
			cout<<str<<m[str];
			printf("\n");
			m[str]++;
		}
	}
	return 0;
}
