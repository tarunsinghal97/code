#include <stdio.h>
int main(){
	int s,t,a,b,m,n;
	scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
	int arr[m],arr2[n],i,f=0,p=0;
	for(i=0;i<m;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		scanf("%d",&arr2[i]);
	for(i=0;i<m;i++){
		if((arr[i]+a)>=s && (arr[i]+a)<=t){
			f=f+1;
		//	printf("%d",f);
		}
	}
	for(i=0;i<n;i++){
		if((arr2[i]+b)<=t && (arr2[i]+b)>=a){
			p=p+1;
		//	printf("%d\n",p);
		}
	}
	printf("%d\n",f);
	printf("%d\n",p);
	return 0;
}
