#include <bits/stdc++.h>
using namespace std;

const int N = 500005;

int BIT[4][N], A[N],k;
vector<int>v;
map<int,int>ma;
set<int>se;
set<int>::iterator it;
void update(int x, int idx, int val)
{
	while(idx<=k){
		BIT[x][idx] += val;
		idx += idx&-idx;
	}
}

int query(int x, int idx)
{
	int ret = 0;
	while(idx){
		ret += BIT[x][idx];
		idx -= idx&-idx;
	}
	return ret;
}
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
		se.insert(a);
	}
	k=1;
	for(it=se.begin();it!=se.end();it++){
		ma[*it]=k++;
	}
	for(int i=0;i<v.size();i++){
		A[i] = ma[v[i]]; 
	}
	update(0,1,1);
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=3;j++)
			update(j, A[i]+1, query(j-1, A[i]));
	}
	cout<<query(3,k)<<endl;
}