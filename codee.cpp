#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,l,r,k;
	cin>>n>>m;
	long long int arr[n]={0},tar[n],arr2[n+1]={0},sum=0,sum2=0;
	for(long long int i=0;i<n;i++)
		cin>>tar[i];
	for(long long int i=0;i<n;i++)
	{
		if(tar[i]==tar[n/2])
		{
			if(i==0)
				arr[i]=1;
			else{
				arr[i] = arr[i-1]+1;
			}
		}	
	}
	for(long long int i=n-1;i>=0;i--)
	{
		if(tar[i]==tar[n/2])
		{
			if(i==n-1)
				arr2[i]=1;
			else{
				arr2[i] = arr2[i+1]+1;
			}
		}
	}
	while(m--)
	{
		cin>>l>>r>>k;
		if(l!=1)
		{
			if((arr[r-1]-arr[l-2])>=k || (arr2[l-1]-arr2[r])>=k)
				cout<<tar[n/2]<<endl;
			else
				cout<<-1<<endl;
		}
		else
		{
			if((arr[r-1])>=k || (arr2[l-1]-arr2[r])>=k)
				cout<<tar[n/2]<<endl;
			else
				cout<<-1<<endl;
		}


	}
	return 0;
}
