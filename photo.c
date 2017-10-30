#include <stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a<m || b<m){
			printf("UPLOAD ANOTHER\n");
		}
		else{
			if(a==b)
				printf("ACCEPTED\n");
			else
				printf("CROP IT\n");
		}
	}
	return 0;
}
