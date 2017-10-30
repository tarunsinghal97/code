#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,t=0,sum=0,count=0;
		cin>>n;
		int arr[n],tar[n+1]={0};
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				tar[t]=1100+tar[t];
				count++;
				t++;
			}
			else
			{
				if(count>0)
				{
					tar[t-count]= tar[t-count]-1000;
					t++;
					tar[t]=1100;
					t++;
				}
			
			}
		}
		for(int i=0;i<t;i++)
			sum += tar[i];
		cout<<sum<<endl;
	}
	return 0;
}
