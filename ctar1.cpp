#include <bits/stdc++.h>
using namespace std;
int BIT[200006];
void update(int val,int idx)
{
	while(idx<=200006)
	{
		BIT[idx] += val;
		idx +=idx-idx;
	}
}
int query(int idx)
{
	int sum=0;
	while(idx>=0)
	{
		sum+=BIT[idx];
		idx -= idx-idx;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,k;
		vector<int>v;
		cin>>n;
		set<int>se;
		map<int,int>ma;
		set<int>::iterator it;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
			se.insert(a);
		}
		k=1;
		int A[n];
		for(it=se.begin();it!=se.end();it++){
			ma[*it]=k++;
		}
		for(int i=0;i<v.size();i++){
			A[i] = ma[v[i]]; 
			cout<<A[i]<<" ";
		}
		for(int i=0;i<=200006;i++)
			BIT[i]=0;
		for(int i=n-1;i>=0;i--)
		{
			update(1,A[i]);
		}
		cout<<query(A[0])<<endl;

	}
	return 0;
}