#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n],i,f=0;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			if(arr[i]!=i+1){
				f=1;
				break;
			}
		}
		if(f==1){
			printf("not inverse\n");
		}
		else
			printf("inverse\n");
	}
	return 0;
}
