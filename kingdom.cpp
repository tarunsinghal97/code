#include<bits/stdc++.h>
using namespace std;
vector< pair<int, int> >v;
int main()
{
	int t,a,b,i,j;
	scanf("%d",&t);
	while(t--)
	{
		int n,count=0;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d%d",&a,&b);
			v.push_back(make_pair(a,b));
		}
		sort(v.begin(),v.end());
		for(i=0;i<v.size();)
		{
			count++;
			j=i;
			while((v[i].first <= v[j].second))
			{	
				i++;
				if(i==v.size())
					break;
			}
		}
		printf("%d\n",count);
		v.clear();
	}
	return 0;
}
