#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		scanf("%d",&t);;
		int arr[t],even=0,odd=0,s;
		for(int i=0;i<t;i++){
			scanf("%d",&arr[i]);
			if(arr[i]%2==0)
				even++;
			else
				odd++;
		}
		if(even==1)
		{
			for(int i=0;i<t;i++){
				if(arr[i]%2==0){
					printf("%d\n",i+1);
					break;
				}
			}
		}
		else{
			for(int i=0;i<t;i++){
				if(arr[i]%2!=0){
					printf("%d\n",i+1);
					break;
				}
			}
		}
		return 0;
	}
