#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	char s[t];
	cin>>s;
	n = strlen(s);
	if(n%2!=0){
		for(int i=n-2;i>=0;i=i-2)
			printf("%c",s[i]);
		for(int j=0;j<n;j=j+2)
			printf("%c",s[j]);
		printf("\n");
	}
	else{
		 for(int i=n-2;i>=0;i=i-2)
			 printf("%c",s[i]);
		 for(int j=1;j<n;j=j+2)
			 printf("%c",s[j]);
		 printf("\n");
	}
	return 0;
}
