#include<bits/stdc++.h>
using namespace std;
int tree[1000000];
int tree2[100000];
char arr[1000000];
#define B 7
void create(int node,int start, int end)
{
	if(start == end)
	{
		tree[node]=(arr[start]-'0');
		tree2[node]=1;
		return;
	}
	else
	{
		int mid = (start+end)/2;
		create(2*node,start,mid);
		create(2*node+1,mid+1,end);
		tree[node]=tree[2*node] + tree2[2*node]*B*tree[2*node+1];
		tree2[node] = tree2[2*node]*tree2[2*node+1]*B;
	}
}

int query(int node, int start, int end, int l, int r)
{
	if(start>end || start>r || end<l)
		return 0;
	if(l<=start && end<=r)
		return tree[node];
	else
	{
		int mid = (start+end)/2;
		int q1 = query(2*node,start,mid,l,r);
		int q2 =  query(2*node+1,mid+1,end,l,r);
		return (q1 + q2*B*tree2[2*node]);
	}
}

int main()
{
	int i,ch;
	int n,m,k,l,r,d;
	scanf("%d%d%d",&n,&m,&k);
	getchar();
	for(i=1;i<=n;i++)
		scanf("%c",&arr[i]);
	create(1,1,n);
	for(i=1;i<2*n;i++)
		printf("%d\n",tree[i]);
	for(i=1;i<=m+k;i++)
	{
		scanf("%d%d%d%d",&ch,&l,&r,&d);
		if(ch==1)
		{
			printf("HII\n");
		}
		else
		{
			int ans1 = query(1,1,n,l,r-d);
			int ans2 = query(1,1,n,l+d,n);
			if(ans1 == ans2)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	//int ans = query(1,1,n,1,n);
	//printf("%d\n",ans);
	return 0;
}
