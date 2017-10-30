#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int tar[m];
    for(int i=0;i<m;i++)
    {
        cin>>tar[i];
    }
    sort(arr,arr+n);
    sort(tar,tar+m);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(arr[i]-tar[j])<=1)
            {
                cnt++;
                tar[j]=9999;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}