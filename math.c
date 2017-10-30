#include <stdio.h>
#include <math.h>
#define num 1000000007
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",((int)pow(a,b)%num));
	return 0;
}
