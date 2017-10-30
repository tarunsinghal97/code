#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[31];
		scanf("%s",s);
		long long int sum=1;
		int cnt=1,prev;
		int l = strlen(s);
		for(int i=0;i<l;i++)
		{
			if(i==0)
			{
				prev = s[i]-'0';
				continue;
			}
			if((s[i]-'0')==prev)
				cnt++;
			else
			{
				sum *= (long long int)pow(2,cnt-1);
				cnt=1;
			}
			prev = s[i]-'0';
		}
		sum *= (long long int)pow(2,cnt-1);
		printf("%lld\n",sum);
	}
	return 0;
}