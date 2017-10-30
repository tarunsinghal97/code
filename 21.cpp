#include<bits/stdc++.h>
using namespace std;
set<int>v;
map<int, pair<int,string> >m,m2;
map< int, pair<int, string > >::iterator it;
int main()
{
	string e;
	int n,m,i,j,a,b,c,d;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		v.insert(a);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&c,&d);
		cin >> e;
		if(v.find(c) == v.end())
			m[c] = make_pair(d,"e");
		m2[c] = make_pair(d,"e");
	}
	for(it=m2.begin();it!=m2.end();it++)
		printf("%s\n",it->second->second);
	for(it=m.begin();it!=m.end();it++)
		printf("%s\n",it->second->second);
	return 0;
}
