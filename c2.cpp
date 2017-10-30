#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<double>S;
	int n,x,y,x1,y1;
	cin>>n>>x>>y;
	int cnt=0,cu=0;
	for(int i=0;i<n;i++)
	{
		cin>>x1>>y1;
		if(x1==x&&y1==y)
		{
			if(n!=1)
				continue;
			cu=1;
			continue;
		}
		if(x1==x){
			cnt=1;
		}
		else{
		double a = (double)(y-y1)/(x-x1);
		S.insert(a);
		}
	}
	cout<<S.size()+cnt+cu<<endl;
	return 0;
}
