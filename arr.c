#include <stdio.h>
int main(){
	int a,sum=0;
	scanf("%d",&a);
	int arr[a],i;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<a;i++){
		if(arr[i]==0){
			arr[i-1];
		}
	}
	for(i=0;i<a;i++)
		sum=sum+arr[i];
	printf("%d\n",sum);
}
