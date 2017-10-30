#include <bits/stdc++.h>
using namespace std;
long long bin_expo(long long A, long long B, long long M)
{
	if(B == 0)
		return 1; 

	if(B % 2 == 1) {
		long long x = bin_expo(A, (B-1)/2, M); 
		x = (x*x) % M;
		return (x*A) % M;
	}
	else {
		long long x = bin_expo(A, B/2, M); 
		return (x*x) % M;
	}
}
int phi(int n)
{
	float result = n;
	for (int p=2; p*p<=n; ++p)
	{
		if (n % p == 0)
		{
			while (n % p == 0)
				n /= p;
			result *= (1.0 - (1.0 / (float) p));
		}
	}
	if (n > 1)
		result *= (1.0 - (1.0 / (float) n));

	return (int)result;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,m;
		cin>>a>>b>>c;
		m=c;
		long long int count=0,i,ans=a,powers[1000000];
		powers[0]=m;
		for(i=1;;i++)
		{
			if(m==1)
			{
				powers[i]=1;
				count++;
				break;
			}
			powers[i]=phi(m);
			m=phi(m);
			count++;
		}
		count=min(b,count);
		cout<<count<<endl;
		for(long long int j=count;j>0;j)
		{
			ans=bin_expo(a,ans%powers[j],powers[j-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}

