#include<bits/stdc++.h>
using namespace std;
long long int arr[10000010];
bool v[10000010];
int sp[10000010];
#define ll long long int
map<ll, ll>m;
void sieve()
{
    for (int i = 2;i<10000010; i+=2)       
        sp[i] = 2;
    for (ll i=3; i<10000010; i+=2)
        if (!v[i])
        {
            sp[i] = i;
            for (ll j = i; (j*i) < 10000010; j += 2)
            {
                if (!v[j*i])    v[j*i] = true, sp[j*i] = i;
            }
        }
}

int main()
{
	int t;
	sieve();
	scanf("%d",&t);
	while(t--)
	{
		ll n, mini=10000010,i,temp;
		ll ans[1000010]={0};
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		for(i=n-1;i>=0;i--)
		{
			mini = 10000010;
			temp = arr[i];
			if(arr[i]==1)
			{
				ans[i]=1;
				continue;
			}
			while(temp > 1)
			{
				if(m[sp[temp]]!=0 && m[sp[temp]]!=i)
					mini = m[sp[temp]];
				if(mini != 10000010)
					ans[i] = max(ans[i], ans[mini]+1);
				m[sp[temp]] = i;
				temp /= sp[temp];
			}
			if(mini == 10000010)
				ans[i] = 1;
		}
		mini = ans[0];
		for(i=0;i<n;i++)
			if(mini < ans[i])
				mini = ans[i];
		printf("%lld\n",mini);
		m.clear();
	}
	return 0;
}
