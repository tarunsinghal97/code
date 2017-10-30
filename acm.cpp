#include<bits/stdc++.h>
using namespace std;
char arr[10001];
set<int>s3;
set<int>s4;
set<char>::iterator it;
set<int>::iterator it2;
vector< set<char> >s1(10001);
map< char,set<int> >s2;
int main()
{
	int i;
	int n,m,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
		s3.insert(i);
	for(i=0;i<n;i++)
	{
		scanf("%s",arr);
		for(j=0;arr[j]!='\0';j++)
			s1[i].insert(arr[j]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%s",arr);
		for(j=0;arr[j]!='\0';j++)
			s2[arr[j]].insert(i);
	}
	int k = 0, flag = 0, ans = 0,g=0;
	for(i=0;i<n;i++)
	{
		g=0;
		flag=0;
		it=s1[i].begin();
		for(k=0;k<26;k++)
		{
			if(it==s1[i].end())
				g=1;
			if(g==1 || *it != 'A'+k)
			{
				flag=1;
				set_intersection(s3.begin(),s3.end(),s2['A'+k].begin(),s2['A'+k].end(),inserter(s4,s4.begin()));
				for(it2=s4.begin();it2!=s4.end();it2++)
					printf("%d ",*it2);
				printf("\n");
				s3.clear();
				s3 = s4;
				s4.clear();
			}
			it++;
		}
		if(flag==0)
			ans += m;
		else
			ans += s3.size();
		s3.clear();
		for(j=0;j<m;j++)
			s3.insert(j);
	}
	printf("%d\n",ans);
	return 0;
}
