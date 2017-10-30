#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	struct node *arr[11];
	bool end;
}node;

node *getnode(void)
{
	node *root = NULL;
	root = (node *)malloc(sizeof(node));
	for(int i = 0; i < 10; i++)
		root -> arr[i] = NULL;
	root -> end = false;
	return root;
}

int insert(node *start, char *brr)
{
	int i,len = strlen(brr),f=0;
	for(i=0;i<len;i++)
	{
		if(start -> end == true)
			f++;
		if((start -> arr[brr[i]-'0']) == NULL)
			start -> arr[brr[i]-'0'] = getnode();
		start = start -> arr[brr[i]-'0'];
	}
	for(i=0;i<10;i++)
		if(start -> arr[i]!=NULL)
			f++;
	start -> end = true;
	return f;
}


int main()
{
	int t,n;
	scanf("%d",&n);
	while(n--)
	{
		node *start = getnode();
	char brr[10001][11];
	int t,r=0;
	scanf("%d",&t);
	for(int i = 0; i < t; i++)
	{
		scanf("%s",brr[i]);
		r+=insert(start, brr[i]);
	}
	if(r==0)
		printf("YES\n");
	else
		printf("NO\n");
}
return  0;
}
