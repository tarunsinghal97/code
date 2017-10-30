#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll BIT[500005],n;
ll A[200006],k;

void update(ll idx, ll val){
	while(idx<=k){
		BIT[idx] +=val;
		idx += idx&-idx;
	}
}

ll query(ll idx)
{
	ll ret = 0;
	while(idx){
		ret += BIT[idx];
		idx -= idx&-idx;
	}
	return ret;
}

int main() {
	
	//relevant code here
	int t;
	cin>>t;
	while(t--)
	{	
		ll q=0,a;
		cin>>n;
		map<ll,ll>mp;
		ll arr[n];
		vector<ll> v;

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			v.push_back(arr[i]);
		}
		k=2;
		sort(v.begin(), v.end());
		for(int i=0;i<v.size();i++)
			mp[v[i]]=k++;
		for(int i=0;i<=k+1;i++)
			BIT[i]=0;
		for(int i=0;i<n;i++)
			A[i] = mp[arr[i]]; 
		for(int i=n-1;i>=0;i--){
			update(A[i], 1);
			q+=query(A[i]-1);
		}
		cout<<q<<endl;
	}
	return 0;
}