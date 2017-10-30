#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	char l1[10010], l2[100010], l3[100010];
	int n,f=0,g=0,i,flag=0;
	scanf("%s%s%s%d",l1,l2,l3,&n);
	for(i=strlen(l3)-1;i>=0;i--)
	{
		if(l3[i]=='1')
			f++;
		if(l3[i]=='0' && flag==0){
			flag=1;
			g=f;
		}
	}
	int l  = 0;
	for(i=strlen(l2)-1;i>=0;i--)
	{
		if(l2[i]=='1'){
			l++;
		}
		if(l2[i]=='0' && flag==0){
			flag=1;
			g=f+l;
		}
	}
	l = l*n;
	f+=l;
	for(i=strlen(l1)-1;i>=0;i--)
	{
		if(l1[i]=='1')
			f++;
		if(l1[i]==0 && flag==0){
			flag=1;
			g=f;
		}
	}
	if(flag==0)
		g=f;
	printf("%d\n",f-g+1);
	}
	return 0;
}
