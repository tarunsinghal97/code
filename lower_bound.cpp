#include<bits/stdc++.h>
using namespace std;
int main()
{
	int input[] = {1,1,2,2,3,3,5,6,6,6,9};
	vector<int>v(input, input+11);
	vector<int>::iterator it1, it2;
	it1 = upper_bound(v.begin(), v.end(), 4);
	printf("%d\n",*it1);
	return 0;
}

