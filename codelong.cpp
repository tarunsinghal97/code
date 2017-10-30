#include <bits/stdc++.h>
using namespace std;
vector<long long int>v(1000001,0);
#define ll long long int
ll arr[1000001];
void sieve(ll n)
{
    
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (long long int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
        	v[p] = p;
            for (long long int i=p*2; i<=n; i += p){
                prime[i] = false;
                if(v[i]==0)
                	v[i]=p;
            }
        }
    }
    v[0]=0;
    v[1]=1;
    v[2]=2;
    v[3]=3;
}
int main()
{
	ll t;
	sieve(1000001);
	for(ll i=2;i<5;i++)
	{
		//cout<<v[i]<<" ";
		cout<<arr[i-1]<<" ";
		map<ll,ll>mp;
		mp[v[i]]++;
		ll f=0;
		while(i!=1)
		{
			i = i/v[i];
			mp[v[i]]++;
			if(mp[v[i]]>=2)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			arr[i] = arr[i-1]+1;
		else
			arr[i]=arr[i-1];
		
	}
	// cin>>t;
	// while(t--)
	// {
	// 	ll a,b;
	// 	cin>>a>>b;
	// 	ll ans1 = arr[b]-arr[a-1];
	// 	ll ans3 = pow(ans1, (b-a+1) );
	// 	cout<<ans3<<endl;
	// }
	return 0;
}
