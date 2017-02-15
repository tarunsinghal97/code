#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	long long int n;   
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n%2)   
			printf("%lld\n",(((n)*(n+2)*(2*n+1)-1)/8));
		else
			printf("%lld\n",(((n)*(n+2)*(2*n+1))/8));
	}

	return 0;
}
