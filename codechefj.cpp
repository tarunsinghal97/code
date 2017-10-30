																																																																																													#include <bits/stdc++.h>
																																																																																													using namespace std;
																																																																																													#define mod 1000000007
																																																																																													long long int bin_expo(long long int A, long long int B, long long int M)
																																																																																													{
																																																																																													    long long int res = 1LL;
																																																																																													    while (B > 0) {
																																																																																													        if (B % 2 == 1) {    //If 2i is in binary representation of B.
																																																																																													            res = (res * A) % M; //Include A*2i  in result.
																																																																																													        }
																																																																																													        A = (A * A) % M; // Get A*2(i+1)
																																																																																													        B = B / 2;
																																																																																													    }
																																																																																													    return res%M;
																																																																																													}
																																																																																													int main()
																																																																																													{
																																																																																														int t;
																																																																																														cin>>t;
																																																																																														while(t--)
																																																																																														{
																																																																																															long long int n;
																																																																																															cin>>n;
																																																																																															long long int arr[n],tar[n],prev =0,cnt=0;
																																																																																															char s[n-1];
																																																																																															for(int i=0;i<n;i++)
																																																																																																cin>>arr[i];
																																																																																																																																																																																																																																																																						for(int i=n-1;i>=0;i--)
																																																																																															{
																																																																																																if(arr[i]>=prev)
																																																																																																{
																																																																																																	tar[i]=arr[i];
																																																																																																	s[i]='o';
																																																																																																}
																																																																																																else
																																																																																																{
																																																																																																	tar[i]=prev;
																																																																																																	if(i==0)
																																																																																																		s[i]='.';
																																																																																																	else
																																																																																																		{
																																																																																																			s[i]='.';
																																																					
																																																																																																		}
																																																																																																}
																																																																																																prev = arr[i];
																																																																																															}
																																																																																															for(int i=0;i<n-1;i++)
																																																																																																if(s[i]=='.')
																																																																																																	cnt++;
																																																																																															long long int ans;
																																																																																															//cout<<cnt<<endl;
																																																																																															if(cnt!=0)
																																																																																																ans = (bin_expo(2,n-1,mod)%mod-bin_expo(2,cnt,mod)%mod+mod)%mod;
																																																																																															else
																																																																																																ans = bin_expo(2,n-1,mod)%mod;
																																																																																															cout<<ans<<endl;
																																																																																														}
																																																																																														return 0;
																																																																																													}