#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n],i,k,j,f=0;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		scanf("%d",&k);
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if((arr[i]+arr[j])==k)
					f=f+1;
			}
		}
		printf("%d\n",f);
	}
	return 0;
}
