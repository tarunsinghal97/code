#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v;
ll sp[5000005];
ll arr[5000005], ans[5000005];
bool prime[5000006];
void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
        	sp[p] = p;
            for (int i=p*2; i<=n; i += p){
                prime[i] = false;
                if(sp[i]==0)
                	sp[i]=p;
            }
        }
    }
    for(int i=1;i<=n;i++){
    	if(prime[i]==true){
    		sp[i]=i;
    		v.push_back(i);
    	}
    }
  
}	
typedef struct node{
	int l,r,x,y,idx;
}node;
node que[5000005];
ll block, BIT[5000005], N;

void update(int idx, int val)
{
	while(idx<=N){
		BIT[idx]+=val;
		idx+=idx&-idx;
	}
}

ll query(int idx){
	ll tmp = 0;
	while(idx){
		tmp += BIT[idx];
		idx -= idx&-idx;
	}
	return tmp;
}
bool cmp(node a, node b)
{
	if(a.l/block != b.l/block)
		return a.l/block < b.l/block;
	return a.r < b.r;
}

void add(int idx)
{
	int i = idx;
	int ans1 = 0;
	ll tmp = arr[i];
	while(tmp>1){
		ans1 = 0;
		ll var = sp[tmp];
		while(tmp%var == 0){
			tmp/=var;
			ans1++;
		}
		update(var, ans1);
		//tmp/=sp[tmp];
	}
	//update(sp[tmp], ans1);
}

void remov(int idx)
{
	int i = idx;
	int ans1 = 0;
	ll tmp = arr[i];
	while(tmp>1){
		ans1 = 0;
		ll var = sp[tmp];
		while(tmp%var == 0){
			tmp/=var;
			ans1--;
		}
		update(var, ans1);
		//tmp/=sp[tmp];
	}
	//update(sp[tmp], ans1);
}
int main()
{
	int k=2;
	sp[1]=1;
	Sieve(1000005);
	N = 1000006;
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	
	ll q,l,r,x,y;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>l>>r>>x>>y;
		que[i].l = l;
		que[i].r = r;
		que[i].x = x;
		que[i].y = y;
		que[i].idx = i;
	}
	block = sqrt(n)+1;
	sort(que, que+q, cmp);
	int currentL=0, currentR=0;
    for(int i=0;i<q;i++)
    {
        int currL = que[i].l, currR = que[i].r;
        currL--, currR--;
        while(currentL < currL)
        {
            remov(currentL);
            currentL++;
        }
        while(currentL > currL)
        {
            add(currentL-1);
            currentL--;
        }
        while(currentR <= currR)
        {
            add(currentR);
            currentR++;
        }
        while(currentR > currR+1)
        {
            remov(currentR-1);
            currentR--;
        }
        ans[que[i].idx] = query(que[i].y) - query(que[i].x - 1);
    }
	for(int i=0;i<q;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}