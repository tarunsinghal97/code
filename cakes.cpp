#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,a,one=0,from,to;
		char tar[4][5];
		cin>>n>>q;
		int arr[n];
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				{
					cin>>tar[i][j];
					if(tar[i][j]=='1')
						one++;
				}
			}
			arr[k] = one;
			one=0;
			getchar();
		}
		while(q--)
		{
			int fans=0;
			cin>>a;
			if(a==1)
			{
				cin>>from>>to;
				for(int i=from-1;i<to;i++)
					fans=arr[i]^fans;
				if(fans>0)
					cout<<"Pishty"<<endl;
				else
					cout<<"Lotsy"<<endl;
			}

			else
			{
				cin>>from;
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						cin>>tar[i][j];
						if(tar[i][j]=='1')
							one++;
					}
				}
				arr[from-1]=one;
				one=0;
			}
		}
	}
	return 0;
}
