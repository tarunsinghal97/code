#include<bits/stdc++.h>
using namespace std;
vector<int>h(26);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char arr[100000];
		int tmp,i,j,k,x=0,p;
		scanf("%s",arr);
		for(i=0;arr[i]!='\0';i++)
			h[arr[i]-'a']++;
		sort(h.rbegin(),h.rend());
		scanf("%d",&k);
		while(1)
		{
			if(h[0]==0)
				break;
			tmp = min(k,h[0]);
			for(j=0;j<k;j++)
				if(h[j]==0)
					break;
			if(tmp>=j)
			{
				x++;
				h[0]>k?h[0]-=k:h[0]=0;
			}
			else
			{
	//			printf("%d\n",j);
				x+=h[j-1];
				for(p=0;p<j;p++)
					h[p]-= h[j-1];
			}
			sort(h.rbegin(),h.rend());
		}
		printf("%d\n",x);
	}
	return 0;
}

