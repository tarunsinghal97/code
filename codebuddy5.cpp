#include <bits/stdc++.h>
using namespace std;
set<int>S;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int arr[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>arr[i];
			S.insert(arr[i]);
		}
		long long int tar[m+2]={0};
		//sort(arr,arr+n);
		for(long long int i=1;i<=m;i++)
		{
	//		cout<<i<<" ";
			for(set<int>::iterator it=S.begin();it!=S.end();it++)
			{
				if(i-(*it)<0)
					tar[i]+=0;
				else if(i-(*it)==0)
					tar[i]+=1;
				else{
				tar[i]+=tar[i-(*it)];
				}
				//cout<<tar[i]<<" ";
			}
//			cout<<tar[i]<<" ";
		}
		cout<<tar[m]<<endl;
		S.clear();
	}
	return 0;
}
			
