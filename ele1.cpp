#include <bits/stdc++.h>
using namespace std;
const int N = 500005;
int A[N];
vector<int>tree[N];
#define m 1000000007

void build(int node, int st, int en)
{
	if(st==en){
		tree[node].push_back(A[st]);
		return;
	}
	int mid = (st+en)>>1;
	build(2*node, st, mid);
	build(2*node+1, mid+1, en);
	merge(tree[2*node].begin(), tree[2*node].end(), tree[2*node+1].begin(), tree[2*node+ 1].end(), back_inserter(tree[node]));
}

vector<int> query(int node, int st, int en, int l1, int r1,int l2, int r2)
{
	vector<int>p;
	if(st>en || st > r || en < l)
		return p;
	if(st>=l && en <=r)
		return tree[node];
	int mid = (st+en)>>1;
	vector<int>p1 = query(2*node, st, mid,l,r);
	vector<int>p2 = query(2*node+1, mid+1, en, l,r);
	vector<int>p3;
	merge(p1.begin(), p1.end(), p2.begin(), p2.end(), back_inserter(p3));
	return p3;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=1;i<=200005;i++)
			tree[i].clear();

		ll n,q,l1,r1,l2,r2;
		ll ans=0,sum1=0,sum2=0,sum3=0,sum4=0;
		cin>>n>>q;
		for(ll i=1;i<=n;i++)
		{
			cin>>A[i];
			sum1 += A[i];
			sum2 += ((A[i]*A[i])%m);
			sum3 += (((A[i]*A[i])%m)*A[i])%m;
		}
		for(int i=1;i<n;i++)
			sum4 += A[i]-A[i+1];
		build(1,1,n);
		while(q--)
		{
			cin>>l1>>r1>>l2>>r2;
			int cnt=0;
			ans = query(1,1,n,l1,r1,l2,r2);
			if(ans)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}