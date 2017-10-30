#include <bits/stdc++.h>
using namespace std;

int arr[23][23],n,m,ans=1;

int check(int x,int y)
{
	if(x==0&&y==0){
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(arr[i][j]==0)
				{
					if(arr[i-1][j]==0 || arr[i][j-1]==0 || arr[i+1][j]==0 || arr[i][j+1]==0)
						return 1;
				}
			}
		}
	}
	else
	{
		int i = x;
		int j = y;
		if(arr[i-1][j]==0 || arr[i][j-1]==0 || arr[i+1][j]==0 || arr[i][j+1]==0)
			return 1;
	}

	return 0;	
}
void rec(int cnt,int idx,int jdx)
{
	/*for(int i=1;i<=n;i++)
	  {
	  for(int j=1;j<=m;j++)
	  cout<<arr[i][j]<<" ";
	  cout<<endl;
	  }
	  cout<<endl;*/
	if(check(0,0)==0)
	{
	//	cout<<"j";

		if(cnt%2!=0)
		{
			ans = 0;
			return;
		}
	}
	//cout<<n<<endl;
	if(idx<=n)
	{
		//cout<<idx<<" "<<jdx<<arr[idx][jdx]<<endl;
		if(arr[idx][jdx]==0)
		{
			if(check(idx,jdx)==1)
			{
				arr[idx][jdx]=1;
				if(jdx>=m)
				{
			//		cout<<idx<<" "<<jdx<<endl;
					rec(cnt+1,idx+1,1);
				}
				else if(jdx<m)
				{
			//		cout<<idx<<" "<<jdx<<endl;
					rec(cnt+1,idx,jdx+1);
				}

				arr[idx][jdx]=0;
				if(jdx>=m)
				{
			//		cout<<idx<<" "<<jdx<<endl;
					rec(cnt,idx+1,1);
				}
				else if(jdx<m)
				{
			//		cout<<idx<<" "<<jdx<<endl;
					rec(cnt,idx,jdx+1);
				}
			}

		}
		else
		{
		//	cout<<"ni mila"<<endl;
			if(jdx>=m)
			{
				//	cout<<"dj";
				idx=idx+1;
				jdx=1;

			}
			else
			{
				//				cout<<"jkl"<<idx<<" "<<jdx<<endl;
				jdx=jdx+1;
				//rec(cnt,idx,jdx);
			}
			rec(cnt,idx,jdx);
		}
		//cout<<idx<<" "<<jdx<<endl;

	}

}

int main()
{
	int k;
	cin>>n>>m>>k;
	while(k--)
	{
		for(int i=0;i<=n+1;i++)
		{
			arr[i][0]=-1;
			arr[i][m+1]=-1;
		}
		for(int i=0;i<=m+1;i++)
		{
			arr[0][i]=-1;
			arr[n+1][i]=-1;
		}
		string s;
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			for(int j=1;j<=m;j++)
			{
				arr[i][j] = s[j-1]-'0';
			}
		}
		rec(0,1,1);
		cout<<ans<<endl;
		ans = 1;
	}
	return 0;
}
