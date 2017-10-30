#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n],pos[n]={0},minu[n]={0},sum=0,min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
			{
				sum+=1;
				pos[i]=sum;
			}
			else
				pos[i]=sum;
		}
//		for(int i=0;i<n;i++)
//			cout<<pos[i]<<" ";
//		cout<<endl;
		sum=0;
		for(int j=n-1;j>=0;j--)
		{
			if(arr[j]==-1)
			{
				sum+=1;
				minu[j]=sum;
			}
			else
				minu[j]=sum;
		}
//		for(int i=n-1;i>=0;i--)
//			cout<<minu[i]<<" ";
//		cout<<endl;
		for(int i=0;i<n-1;i++)
		{
			if(min>(pos[i]+minu[i+1]))
				min=pos[i]+minu[i+1];
		}
		cout<<min<<endl;
	}
	return 0;
}


