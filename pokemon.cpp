#include<bits/stdc++.h>
using namespace std;
set <int> s;
set <int> s2;
int main()
{
	int n,arr[10000],i,j,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		s2.insert(arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		s.insert(arr[i]);
		for(j=i+1;j<n;j++)
		{
			s.insert(arr[j]);
			if(s.size()==s2.size())
				f++;
		}
		s.clear();
	}
	printf("%d\n",f);
	return 0;
}
