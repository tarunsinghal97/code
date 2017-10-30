#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll n;
ll sum[500009];
ll rec(ll idx,ll prev,ll cnt)
{

	ll res=0;
	if(idx>=n)
		return cnt;
	if(s[idx]==s[prev] && (sum[idx-1]-sum[prev])==0)
		res += rec(idx+1,idx,cnt+1)+rec(idx+1,prev,cnt+1);
	else
		res += rec(idx+1,idx,cnt)+rec(idx+1,prev,cnt);
	return res;

}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    cin>>n;
    ll arr[n+9];
   
    cin>>s;
    for(ll i=1;i<=n;i++)
        cin>>arr[i];
    
    sum[0]=0;
    for(ll i=1;i<=n;i++)
        sum[i] = sum[i-1] + arr[i];
    cout<<rec(1,0,0)<<endl;
   
   }
    return 0;
}