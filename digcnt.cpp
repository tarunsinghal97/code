#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int l,r,arr[10],cnt=0;
		cin>>l>>r;
		for(long long int i=0;i<10;i++)
			cin>>arr[i];
		for(long long int i=l;i<=r;i++)
		{
			vector<long long int>v(10,0);
			long long int a=i;
			while(a!=0)
			{
				v[a%10]++;
				a=a/10;
			}
			for(int j=0;j<10;j++)
			{
				if(v[j]==arr[j])
				{
					cnt++;
					break;
				}
			}
		}
		cout<<r-l+1-cnt<<endl;
	}
	return 0;
}


