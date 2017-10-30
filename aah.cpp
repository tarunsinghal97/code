#include <bits/stdc++.h>

using namespace std;
#define M 1000000007
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,i;
    cin>>n;
    long long int a,b,c,sum=0;
    for(i=1;i*i<=n;i++)
    {
      a=n/i;
      b=n/(i+1);
      b=((b*(b+1))/2)%M;
      a=((a*(a+1))/2)%M;
      //cout<<b<<" "<<a<<" "<<sum<<endl;
      sum = (sum + ((a-b)*i)%M)%M;
    }
    a=n/i;
    for(int i=1;i<=a;i++)
    sum= (sum+(i*(n/i))%M)%M;
    cout<<sum<<endl;
  }
  return 0;
}

