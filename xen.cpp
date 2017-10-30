#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define gc getchar_unlocked

long long read_int()
{
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9')
    {
        ret = 10 * ret + c - 48;
        c = gc();
    }
  return ret;
}
    
vector<ll> v;
ll sp[5000005];
ll arr[5000005];
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

vector<int>tree[5000005];
vector<int>v1[1000009];
void build(int node, int st, int en)
{
    if(st==en){
        tree[node] = v1[st];
        return;
    }
    int mid = (st+en)>>1;
    build(2*node, st, mid);
    build(2*node+1, mid+1, en);
    merge(tree[2*node].begin(), tree[2*node].end(), tree[2*node + 1].begin(), tree[2*node+ 1].end(), back_inserter(tree[node]));
}

int query_tree (int queryLeft, int queryRight, int X, int Y, int rangeLeft, int rangeRight, int index)
{
    if (queryRight < rangeLeft || rangeRight < queryLeft)
        return 0;
    if (queryLeft <= rangeLeft && rangeRight <= queryRight)
        return upper_bound(tree[index].begin(), tree[index].end(), Y) - lower_bound(tree[index].begin(), tree[index].end(), X);
    int mid = (rangeLeft + rangeRight) / 2;
    return query_tree(queryLeft, queryRight, X, Y, rangeLeft, mid, 2*index) + query_tree(queryLeft, queryRight, X, Y, mid+1, rangeRight, 2*index+1);
}



int main()
{
    sp[1]=1;
    Sieve(1000005);
    ll n,tmp;
    n = read_int();
    for(ll i=1;i<=n;i++){
        arr[i] = read_int();    
        tmp = arr[i];
        while(tmp>1)
        {
            v1[i].push_back(sp[tmp]);
            tmp/=sp[tmp];
        }
    }
    build(1,1,n);  
    ll q,l,r,x,y;
    q = read_int();
    for(int i=0;i<q;i++)
    {
        l = read_int();
        r = read_int();
        x = read_int();
        y = read_int();
        cout<<query_tree(l,r,x,y,1,n,1)<<endl;
    }
    
    return 0;
}    