#include <bits/stdc++.h>
using namespace std;
map<pair<long long int,long long int>,int >tar;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,q,a,b,count,f=0,k=0;
		cin>>n>>q;
		map<pair<long long int,long long int>,int>::iterator it,it1,it2,it4;
		while(q--)
		{
			cin>>a>>b;
			pair<long long int,long long int>p;
			p = make_pair(a,b-1);
			tar[p]=1;
		}
		for(it=tar.begin();it!=tar.end();it++)
		{
			it1 = it;
			it1 = ++it1;
			it2 = it1;
			it2 = ++it2;
			if(it1!=tar.end() && it2!=tar.end() && (*it).first.first== (*it1).first.first && (*it1).first.first==(*it2).first.first)
			{
				count = (*it).first.first-1;
				k=1;
				break;
			}
			else if( it1!=tar.end() && (((*it1).first.first)-((*it).first.first))>1)
				f=0;

			else
			{
				if(it1!=tar.end() && (*it).first.first==(*it1).first.first)
				{
					if((*it).first.second==0 && (*it1).first.second==1 && f!=2)
					{
						f=1;
						it = ++it;
					}
					else if((*it).first.second==0 && (*it1).first.second==2)
					{
						f=0;
						it = ++it;
					}
					else if((*it).first.second==1 && (*it1).first.second==2 && f!=1)
					{
						f=2;
						it = ++it;
					}
				}
				else if(((*it1).first.first-(*it).first.first)==1)
				{
					if((*it).first.second==0)
					{
						f=0;
					}
					else if((*it).first.second==1)
					{
						f = f + 0;
					}
					else if((*it).first.second==2 && f!=2)
					{
						f=0;
					}
				}
				else
				{
					k=1;
					count = (*it).first.first;
					break;
				}
			}

		}
		if(k==1)
			cout<<count<<endl;
		else
			cout<<n<<endl;
		tar.clear();
	}
	return 0;
}

