#include <stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
	int n,m,c,i,f=0,a;
	scanf("%d%d%d",&n,&m,&c);
	for(i=1;i<=n;i++)
		if(c%i==0 && (c/i)<=m)
			f=f+1;
	printf("%d\n",f);
	}
	return 0;
}

