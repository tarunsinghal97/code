#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,f=0;
        scanf("%d",&n);
        long long int arr[n],i,j,tar[n+1];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(i=0;i<n+1;i++)
        {
            scanf("%lld",&tar[i]);
        }
        sort(arr,arr+n);
        sort(tar,tar+n+1);
        for(i=0;i<n;i++)
        {
            if(tar[i]!=arr[i])
            {
                if(arr[i]==tar[i+1]){
                    printf("%lld\n",tar[i]);
                    f=1;
                    break;
                }
                if(tar[i]==tar[i+1])
                {
                    printf("%lld\n",tar[i]);
                }
            }
        }
        if(f==0)
        {
            printf("%lld\n",tar[n]);
        }
    }
    return 0;
}

