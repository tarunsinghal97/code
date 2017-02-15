#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	//scanf("%d",&t);
	while(scanf("%d",&t)!=EOF)
	{
		int count=0;
		string s1,s2;
		cin>>s1>>s2;
		vector<size_t>v;
		size_t pos = s2.find(s1,0);
		while(pos!=string::npos)
		{
			
			v.push_back(pos+1);
			pos = s2.find(s1,pos+1);
			count++;
		}
		if(count==0)
			cout<<"\n\n";
		else
		{
		//cout<<count<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i]-1<<endl;
		}
	}
	return 0;
}

