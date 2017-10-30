// Template by [thunder_blade]
// IIIT ALLAHABAD
// includes :)

#include<bits/stdc++.h>
using namespace std;

#define TEST  int test_case; cin>>test_case; while(test_case--)
#define all(v) (v).begin(),(v).end()
#define fi  first
#define se  second
#define pb push_back
#define mp make_pair
#define ll long long int
#define SPEED ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
#define pi(x) printf("%d",x)
#define pf(x) printf("%f",x)
#define ps(x) printf("%s",x)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pis(x) printf("%d ",x)
#define pfs(x) printf("%f ",x)
#define pss(x) printf("%s ",x)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define MOD 1000000007
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
int a[1000100];
int main()
{
	int i,j,l;
	ll sum = 0;
	int carry=0,k=0,n;
	for(i=0;i<1000;i++)
		a[i]=1;
	scanf("%d",&n);
	for(l=1;l<=n;l++)
	{
		i=3;
		for(j=0;j<=k;j++)
		{
			a[j]=a[j]*i+carry;
			carry=a[j]/10;
			a[j]=a[j]%10;
		}
		while(carry!=0)
		{
			k++;
			a[k]=carry%10;
			carry=carry/10;
		}
	}
	for(i=k;i>=0;i--)
		sum += (a[i]);
	printf("%lld\n",sum);
	return 0;
}

