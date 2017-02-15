#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int>v(n);
	vector<int>::iterator it;
	int ans,k,a;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		v[i]=a;
	}
	scanf("%d",&k);
	for(int i=0;i<=n-k;i++)
	{
		it = max_element(v.begin()+i,v.begin()+i+k);
		printf("%d ",v[it-v.begin()]);
	}
	printf("\n");
	return 0;
}
