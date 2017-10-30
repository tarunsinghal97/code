#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,n;
		cin>>n>>s;
		int arr[n][2],x,wt[n][s+1];
		for(int i=0;i<n;i++){
			cin>>x>>arr[i][1];
			arr[i][0]=x-arr[i][1];
		}
		int dp[n][s+1];
		for(int i=0;i<n;i++){
			dp[i][0]=0;
			wt[i][0]=0;
		}
		for(int i=1;i<s+1;i++)
		{
			if(arr[0][1]<=i)
			{
				dp[0][i]=arr[0][0];
				wt[0][i]=arr[0][1];
			}
			else{
				dp[0][i]=0;
				wt[0][i]=0;
			}
		}
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<s+1;j++)
			{
				if(arr[i][1]>j){
					dp[i][j]=dp[i-1][j];
					wt[i][j]=wt[i-1][j];
				}
				else{
					dp[i][j]=max(dp[i-1][j],arr[i][0]+dp[i-1][j-arr[i][1]]);
					if(dp[i-1][j]>arr[i][0]+dp[i-1][j-arr[i][1]])
					{
						wt[i][j]=wt[i-1][j];
					}
					else
						wt[i][j]=arr[i][1]+wt[i-1][j-arr[i][1]];
				}

			}
		}
		/*for(int i=0;i<n;i++)
		{
			for(int j=1;j<=s;j++)
			{
				cout<<wt[i][j]<<" ";
			}
			cout<<endl;
		}*/
		printf("%d %d\n",wt[n-1][s],s+dp[n-1][s]);
	}
	return 0;
}
