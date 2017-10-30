#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char st[200];
		int i,s=0,f=0,len;
		scanf("%s",st);
		len=strlen(st);
		for(i=4;i<len-4;i++){
			if(st[i]!='a' && st[i]!='e' && st[i]!='i' && st[i]!='o' && st[i]!='u'){
				f=f+1;
			}
		}
		printf("%d/%d\n",(f+4),(len));
	}
		return 0;
	}

