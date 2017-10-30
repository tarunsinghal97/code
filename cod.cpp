#include<bits/stdc++.h>
using namespace std;
char arr[2500010];
char t[2500010];
typedef struct state
{
	int len,link;
	map<char, int>next;
}state;

int last,cur,sz;
state st[2500010];

void sa_init()
{
	cur=0;
	last=0;
	st[cur].link=-1;
	st[cur].len = 0;
	sz=1;
}

void sa_extend(char c)
{
	int p,clone;
	cur = sz++;
	st[cur].len = st[last].len + 1;
	for(p=last; p!=-1 && !st[p].next.count(c); p=st[p].link)
		st[p].next[c] = cur;
	if(p==-1)
		st[cur].link = 0;
	else
	{
		int q = st[p].next[c];
		if(st[p].len + 1 == st[q].len)
			st[cur].link = q;
		else
		{
			clone = sz++;
			st[clone].len = st[p].len + 1;
			st[clone].next = st[q].next;
			st[clone].link = st[q].link;
			for(;p!=-1 && st[p].next[c]==q;p=st[p].link)
				st[p].next[c] = clone;
			st[q].link = st[cur].link = clone;
		}
	}
	last = cur;
}
int lcs()
{
	int v = 0,i,l=0, best=0,ans=0;
	for(i=0;i<500000;i++)
	{
		st[i].next.clear();
		st[i].link=-1;
		st[i].len=0;
	}
	sa_init();
	int length = strlen(arr);
	for(i=0;i<length;i++)
		sa_extend(arr[i]);
	for(i=0;i<length;i++)
		sa_extend(arr[i]);
	length = strlen(t);
	for(i=0;i<length;i++)
	{
		while(v && !st[v].next[t[i]])
		{
			v = st[v].link;
			l = st[v].len;
		}
		if(st[v].next[t[i]])
		{
			v = st[v].next[t[i]];
			l++;
		}
		if(best < l)
		{
			ans = i;
			best = l;
		}
	}
	return ans;
}
int lcs2()
{
	int v = 0,i,l=0, best=0,ans=0;
	for(i=0;i<500000;i++)
	{
		st[i].next.clear();
		st[i].link=-1;
		st[i].len=0;
	}
	sa_init();
	int length = strlen(t);
	for(i=0;i<length;i++)
		sa_extend(t[i]);
	for(i=0;i<length;i++)
		sa_extend(t[i]);
	length = strlen(arr);
	for(i=0;i<length;i++)
	{
		while(v && !st[v].next[arr[i]])
		{
			v = st[v].link;
			l = st[v].len;
		}
		if(st[v].next[arr[i]])
		{
			v = st[v].next[arr[i]];
			l++;
		}
		if(best < l)
		{
			ans = i;
			best = l;
		}
	}
	return ans;
}

int main()
{
	int n1;
	scanf("%d",&n1);
	scanf("%s",arr);
	scanf("%s",t);
	int ans = abs(lcs()-lcs2());
	printf("%d\n",ans);
	return 0;
}
