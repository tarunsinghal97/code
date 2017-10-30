#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll l=s.length(),ans=0,sum=0,one=0,t;
		ll arr[l];
		for(ll i=0;i<l;i++)
			if(s[i]=='1')
				one++;
		t = l - one;
		for(ll i=l-1;i>=0;i--)
		{
			if(s[i]=='1')
			{
				sum+=1;
				while(s[i]=='1' && i>=0)
				{
					arr[i]=sum;
					i--;
				}
				i++;
			}
			else
			{
				arr[i]=sum;
			}

		}
		for(ll i=0;i<l;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
		for(ll i=0;i<l;i++)
		{
			if(s[i]=='1')
			{
				ans += t-i + arr[i] - arr[t];
				cout<<ans<<" ";
				t++;

			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

