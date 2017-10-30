#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>::iterator it;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0;i <n; i++)
	{
		if(i==3)
			continue;
		v.push_back(i);
	}
	it =  lower_bound(v.begin()+2, v.end()-1, 3);

	printf("%d\n",*it);
	return 0;
}
