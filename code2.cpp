#include <bits/stdc++.h>
using namespace std;
int main(){
	//here the code begins
	int t,q=1;
	cin>>t;
	while(t--)
	{
		char n[20],flag=0,loc1=0;
		int i,m,loc=0;
		cin>>n;

		m=strlen(n);

		if(m==1)
		{
			cout<<"Case #"<<q++<<": ";
			cout<<n<<endl;
		}
		else
		{
			int f=0,l;
			for(i=0;i<m-1;i++)
			{
				if(n[i+1]<n[i])
				{
					if(n[i]!='1'){
						n[i]-=1;
						for(int p=i+1;p<m;p++)
							n[p]='9';

						for(int k=i;k>=0;k--)
						{
							if(n[k]>n[i])
							{
								n[k]=n[i];
								l=k;
								f=1;
							}
						}
						if(f==1)
						{
						for(int p=l+1;p<=i;p++)
							n[p]='9';
						}
						f=0;

						break;
					}
					else{
						for(int p=0;p<m;p++)
							n[p]='9';
						flag=1;
						break;
					}
				}
			}
			if(flag==0)
			{
				cout<<"Case #"<<q++<<": ";
				for(int j=0;j<m;j++)
					cout<<n[j];
				cout<<endl;
			}
			else
			{
				cout<<"Case #"<<q++<<": ";
				for(int j=1;j<m;j++)
					cout<<n[j];
				cout<<endl;
			}
		}

	}
	return 0;
}
