#include <bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		long long int arr[n],ans;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		long long int max=abs(arr[0]-arr[1]),cnt=1;
		for(int i=1;i<n;i++)
		{
			ans = abs(arr[i]-arr[i+1]);
			if(max>ans)
			{
				max = ans;
				cnt=1;
			}
			else if(max==ans)
				cnt++;
		}
		cout<<max<<" "<<cnt<<endl;
		return 0;
}
