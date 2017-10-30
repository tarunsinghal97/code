#include <bits/stdc++.h>
using namespace std;

typedef long long  lli;

#define pb push_back


vector < lli > height;
vector < lli > s;
lli Histogram(vector<lli> &height)
{
    s.clear();
    height.push_back(0);

    lli sum = 0;
    lli i = 0;
    while(i < height.size())
    {
    	cout<<height.size()<<endl;
        if(s.empty() || height[i] > height[s.back()])
        {
            s.push_back(i);
            i++;
        }
        else
        {
            lli t = s.back();
            s.pop_back();

            sum = max(sum, height[t] * (s.empty() ? i : i - s.back() - 1));
        }
    }

    return sum;
}

int main(void)
{
    lli i,j,k,kase=0;

    lli n;
    while( 1 )
    {
    	scanf("%lld",&n);
    	if(n==0)
    		break;
        height.assign(n, 0);
        for(i=0; i<n; i++) scanf("%lld",&height[i]);
        printf("%lld\n",Histogram(height));
    }
    return 0;
}
