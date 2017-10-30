#include <bits/stdc++.h>
using namespace std;
 
long long SOD(long long K) 
{
    long long sod = 0;
    while (K)
    {
        sod += K % 10;
        K /= 10;
    }
    return sod;
}
 
long long toy(long long N, long long diff)
{
    long long low = 1, high = N;
    
    while (low <= high) 
    {
        long long mid = (low + high) / 2;
        if (mid - SOD(mid) < diff)        
            low = mid + 1;
        
        else       
            high = mid - 1;        
    }
 
  
    return (N - high);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    	long long N;
    	long long diff;
    	cin>>N>>diff;
  		cout << toy(N, diff);    
    return 0; 
}