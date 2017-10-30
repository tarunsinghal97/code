#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5][5],row,col,ans;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				row=i;
				col=j;
			}
		}
ans =(abs(2-col)+abs(2-row));
cout<<ans<<endl;
return 0;
}
