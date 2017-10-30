#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],sum=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		sum ^= arr[i];
	if(sum==0)
		cout<<"vinit"<<endl;
	else
		cout<<"ada"<<endl;
	return 0;
}
