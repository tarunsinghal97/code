#include<bits/stdc++.h>
using namespace std;
string arr[10001];
set<char>s;
int main()
{
	int t,n1;
	scanf("%d",&n1);
	for(t=0;t<n1;t++)
	{
		int n,i,j,idx=0,max=-1;
		scanf("%d",&n);
		getchar();
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
			for(j=0;j<arr[i].length();j++)
			{
				if(arr[i][j]!=' ')
					s.insert(arr[i][j]);
			}
			if(max < (int)s.size())
			{
				max = s.size();
				idx = i;
			}
			s.clear();
		}
		cout <<"Case #"<<t+1<<":"<<arr[idx]<<endl; 
	}
	return 0;
}
