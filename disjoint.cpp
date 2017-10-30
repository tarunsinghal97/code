#include <bits/stdc++.h>
using namespace std;
int arr[100002],tar[100002];
int find_set(int a)
{
	if(a!=arr[a])
		arr[a] = find_set(arr[a]);
	return arr[a];
}
int main()
{
	multiset<int>S;
	int n,q,a,b;
	scanf("%d%d",&n,&q);
	for(int i=1;i<n+1;i++)
		arr[i]=i,tar[i]=1,S.insert(1);
	multiset<int>::iterator it;
	multiset<int>::reverse_iterator it1;
	for(int i=0;i<q;i++)
	{
		scanf("%d%d",&a,&b);
		int p1 = find_set(a);
		int p2 = find_set(b);
		if(p1!=p2)
		{
			it = S.find(tar[p1]);
			if(it!=S.end())
				S.erase((it));
			it = S.find(tar[p2]);
			if(it!=S.end())
				S.erase((it));
			arr[p2]=p1;
			tar[p1] += tar[p2];
			S.insert(tar[p1]);
		}
		it = S.begin();
		it1 = S.rbegin();
		cout<<(*it1)-(*it)<<endl;
	}
	return 0;
}