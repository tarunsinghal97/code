#include <bits/stdc++.h>
using namespace std;
long long int grundy[5000005];
#define ll long long int
void initialize(ll n,ll m)
{
	ll t = (1<<(n*m))-1;
	grundy[t] = 0;
//	ll k = 0;
	for(ll masking = (1<<(n*m))-2 ; masking  >=0  ;masking --){
		int tar[55][55] = {0},k=0;
		for(int i=0;i<(n*m);i++){
	//int row = i/m;
	int col = i%m;
	int row = i/m;
		tar[row][col] = (masking >>(n*m-1-i))&1;
		}
	for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(tar[i][j]==0){
if(j+1<m && tar[i][j+1]==0)
					k |= (1<<(grundy[masking|(1<<(n*m-1-i*m - j))]));
					if(i+1<n && tar[i+1][j]==0)
					k |= (1<<(grundy[masking |(1<<(n*m-1-i*m - j))]));
					
if(j-1>=0 && tar[i][j-1]==0)
						k |= (1<<(grundy[masking|(1<<(n*m-1-i*m - j))]));
						if(i-1>=0 && tar[i-1][j]==0)
						k |= (1<<(grundy[masking|(1<<(n*m-1-i*m - j))]));
				
				}

			}
		}
		for(int o = 0; o < (n*m) ; o++){
			if((k&(1<<o))==0){
				grundy[masking] = o;
				break;
			}
		}
	}
}
int main()
{
	ll n,m,q;
	cin>>n>>m>>q;
	initialize(n,m);
	string s[1000];
	while(q--)
	{//cout<<"sks";
		for(ll i=0;i<n;i++)
		{
			cin>>s[i];
		}
		ll value = 0;//hdh;
		for(ll i=0;i<n;i++)
		{
		for(ll j=0;j<m;j++)
			{
				if(s[i][j]=='1')
				{
					value = value|(1<<((n*m)-1-(i*m)-j));
					//cout<<value<<endl;
				}
			}
		}
	//	cout<<grundy[value]<<endl;
		if(grundy[value])
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
	}
	return 0;
}
