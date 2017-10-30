#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int s,v;
		double time;
		scanf("%lld%lld",&s,&v);
		time=((double)(2*s)/(3*v));
		if(time < 0.0000001)
			printf("%.7lf\n",0.0000001);
		else
			printf("%lf\n",time);
	}
	return 0;
}

