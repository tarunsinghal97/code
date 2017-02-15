#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int arr[a],tar[b];
		for(long long int i=0;i<a;i++)
			cin>>arr[i];
		for(long long int i=0;i<b;i++)
			cin>>tar[i];
		sort(arr,arr+a);
		sort(tar,tar+b);
		if(arr[a-1]>=tar[b-1])
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}
