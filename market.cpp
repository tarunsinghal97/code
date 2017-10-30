#include <bits/stdc++.h>
using namespace std;
int fe[100005],fs[100005];
int block;
bool compare(pair<pair<int,int>,pair<int,int> >p1,pair<pair<int,int>,pair<int,int> >p2)
{
	if(p1.first.first/block!=p2.first.first/block)
		return p1.first.first/block<p2.first.first/block;
	return p1.first.second<p2.first.second;
}

int ans[500005];

void qu(int n,int arr[],vector<pair<pair<int,int>,pair<int,int> > >v,int s)
{
	int freq[100005]={0};
	block = (int)sqrt(n);
	sort(v.begin(),v.end(),compare);
	int cs=0,cl=0,cr=0,cnt=0,cnt1=0,d;
	for(int i=0;i<s;i++)
	{
		int l=v[i].first.first;
		int r=v[i].first.second;
		int k = v[i].second.first;
		int idx = v[i].second.second;
		while(cl<l)
		{
			//if(fs[i]==k)
			freq[fs[cl]]--;
			cl++;
		}
		while(cl>l)
		{
			//if(fe[cl]==k)
			freq[fs[cl-1]]++;
			cl--;
		}
		while(cr<=r)
		{
			//if(fs[cr]==k)
			freq[fe[cr]]++;
			//else
			cr++;
		}
		while(cr>r+1)
		{
			//if(fe[cr]==k)
			freq[fe[cr-1]]--;
			cr--;
		}
		ans[idx]=freq[k];
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,ai,a,b,k,cnt=0;
		cin>>n>>q;
		ai=q;
		int arr[n];
		vector<pair<pair<int,int>,pair<int,int> > >v;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int a2=arr[0];
		cnt=1;
		fe[0]=1;
		//array for continuous sum from start
		for(int i=1;i<n;i++)
		{
			if(arr[i]==arr[i-1])
				cnt++;
			else
				cnt=1;
			fe[i]=cnt;
		}
		cnt=1;
		fs[n-1]=1;
		//array for conyinuous sun from last
		for(int i=n-2;i>=0;i--)
		{
			if(arr[i]==arr[i+1])
				cnt++;
			else
				cnt=1;
			fs[i]=cnt;
		}
		for(int i=0;i<q;i++)
		{
			cin>>a>>b>>k;
			v.push_back(make_pair(make_pair(a-1,b-1),make_pair(k,i)));
		}

		qu(n,arr,v,ai);
		for(int i=0;i<q;i++)
			cout<<ans[i]<<endl;
	}
	return 0;
}
