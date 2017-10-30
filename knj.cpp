#include <bits/stdc++.h>
using namespace std;
int main()
{       
	int n,k;
	cin>>n>>k;
	int arr[n];
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	double ans,ans1,ans2;
	ans = k*n;
	double ans3 = (double)n/2;
	ans1 = 2*(ans - sum - ans3);
	ans2 = ans1;
	if(ans2<= 0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	cout<<ans2<<endl;
	return 0;
}

