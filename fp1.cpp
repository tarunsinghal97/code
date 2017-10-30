nclude <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1]={0};
	int k;
	cin>>k;
	long int turn[k];
	vector<int>v;
	for(int i=1;i<=n;i++)
		v.push_back(i);
	for(int i=0;i<k;i++)
		cin>>turn[i];
	int ldr=1,fr,i=0,rem;
	vector<int>::iterator it;
	while(i<k)
	{
		fr=turn[i]%v.size();
		// cout<<fr<<" "<<turn[i]<<" ";
		//        // cout<<v.size()<<" ";
		//                rem=ldr+fr;
		//                        if(rem>v.size())
		//                                    rem=(rem)%v.size();
		//                                           // cout<<rem<<" ";
		//                                                   cout<<v[rem-1]<<" ";       
		//                                                           ldr=rem;
		//                                                                   if(rem==v.size())       
		//                                                                           ldr=1;
		//                                                                                  // cout<<ldr<<" "<<endl;
		//                                                                                         
		//                                                                                                 it=lower_bound(v.begin(),v.end(),v[rem-1]);
		//                                                                                                         v.erase(it);
		//                                                                                                                 i++;
		//
		//                                                                                                                     }
		//                                                                                                                         return 0;
		//                                                                                                                         }
