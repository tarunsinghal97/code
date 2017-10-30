#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,l=0,k=0,s=0;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i=i+3)
		s=s+arr[i];
	for(i=1;i<n;i++){
		l=l+arr[i];
		i=i+2;
	}
	for(i=2;i<n;i++){
		k=k+arr[i];
		i=i+2;
	}
	printf("%d %d %d\n",s,l,k);
	return 0;
}
