#include <stdio.h>
#include <stdlib.h>
int v[1000],c[100],n;
struct node
{
	int info;
	struct node *link;
};
struct node *adj[100];
struct node *ab(struct node *h,int v)
{
	struct node *tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->info=v;
	tmp->link = NULL;
	return tmp;
}
struct node *ae(struct node *h,int v)
{
	struct node *tmp,*p;
	tmp = (struct node*)malloc(sizeof(struct node));
	p = h;
	while(p->link!=NULL)
	{
		p = p->link;
	}
	p->link=tmp;
	tmp->info=v;
	tmp->link=NULL;
	return h;
}

void dfs(int s)
{
	v[s]=1;
	struct node *tmp = adj[s];
	while(tmp!=NULL)
	{
		if(v[tmp->info]==0)
		{
			//printf("%d ",tmp->info);
			dfs(tmp->info);
		}
		tmp = tmp->link;
	}
}
int main()
{
	int e,a,b,i;
	scanf("%d%d",&n,&e);
	for(i=0;i<100;i++)
	{
		adj[i]=NULL;
	}
	while(e--)
	{
		scanf("%d%d",&a,&b);
		c[a]++;
		c[b]++;
		if(c[a]==1 && c[b]==1)
		{
			adj[a] = ab(adj[a],b);
			adj[b] = ab(adj[b],a);
		}
		else if(c[a]>1 && c[b]==1)
		{
			adj[a]=ae(adj[a],b);
			adj[b]=ab(adj[b],a);
		}
		else if(c[a]==1 && c[b]>1)
		{
			adj[a]=ab(adj[a],b);
			adj[b]=ae(adj[b],a);
		}
		else if(c[a]>1 && c[b]>1)
		{
			adj[a]=ae(adj[a],b);
			adj[b]=ae(adj[b],a);
		}
	}
	dfs(0);
	for(i=0;i<n;i++)
	{
		if(v[i]==1)
			printf("%d ",i);
	}
	return 0;
}
