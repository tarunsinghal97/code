#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,last;
		long long int b;
		scanf("%d%lld",&a,&b);
		last=a%10;
		if(b==0)
			printf("1\n");
		else if(last==0 || last==1 || last==5 || last==6)
			printf("%d\n",last);
		else if(last==2 || last==3 || last==7 || last==8)
		{
			if(b%4==0)
				printf("%d\n",(last*last*last*last)%10);
			if(b%4==1)
				printf("%d\n",last);
			if(b%4==2)
				printf("%d\n",(last*last)%10);
			if(b%4==3)
				printf("%d\n",(last*last*last)%10);
		}
		else if(last==4 || last==9)
		{
			if(b%2==0)
				printf("%d\n",(last*last)%10);
			if(b%2==1)
				printf("%d\n",last);
		}

	}
	return 0;
}
