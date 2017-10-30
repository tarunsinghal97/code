#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1]={0};
    int k;
    cin>>k;
    long int turn[k];
    vector<int>v1;
    for(int i=1;i<=n;i++)
        v1.push_back(i);
    for(int i=0;i<k;i++)
    cin>>turn[i];
    int ldr=1,fr,i=0,rem;
    vector<int>::iterator it;
    while(i<k)
    {
        fr=turn[i]%v1.size();
        rem=ldr+fr;
        if(rem>v1.size())
            rem=(rem)%v1.size();
        cout<<v1[rem-1]<<" ";       
        ldr=rem;
        if(rem==v1.size())       
        ldr=1;
        it=lower_bound(v1.begin(),v1.end(),v1[rem-1]);
        v1.erase(it);
        i++;

    }
    return 0;
}
