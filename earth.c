#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n],i;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			for(j=0;j<n && j!=i;j++){
				if(arr[i]<=arr[j]){
					f=f+1;
				}
			}
			c=f*(i+1);
