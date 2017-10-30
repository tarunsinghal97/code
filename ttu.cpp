#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
ios::sync_with_stdio(false); cin.tie(0);
int t;	cin>>t;
while(t--)
{
ll n,b,res;
cin>>n;
b = sqrt(n);
res = 2*b - 1;
if(b*b == n)
cout<<res<<endl;
else if(n - (b*b) <= b)
cout<<res+1<<endl;
else
cout<<res+2<<endl;
}
return 0;
}