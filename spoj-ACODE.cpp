#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[5001];
	while(1)
	{
		cin>>s;
		if(s[0]=='0')
			break;
		int dp[strlen(s)]={0};
		dp[0]=1;
		dp[-1]=1;
		cout<<dp[-1]<<endl;
		for(int i=1;i<strlen(s);i++)
		{
			int n=(s[i-1]-'0')*10+(s[i]-'0');
			cout<<n<<endl;
			if(s[i]>='1'&&s[i]<='9')
				dp[i]=dp[i-1];
			if(9<n&&27>n)
			{
				dp[i]+=dp[i-2];
			}
		cout<<dp[i]<<" "<<endl<<endl;
		}
		cout<<dp[strlen(s)-1]<<endl;
	}
	return 0;
}

