#include <bits/stdc++.h>
using namespace std;
int main()
	{
		char s1[100009];
		cin>>s1;
		int B,a,l,b,s,u,r,arr[6];
		for(int i=0;i<strlen(s1);i++)
		{
			if(s1[i]=='B'){
				B++;
			}
			if(s1[i]=='a'){
				a++;
			}
			if(s1[i]=='l'){
				l++;
			}
			if(s1[i]=='b'){
				b++;
			}
			if(s1[i]=='s'){
				s++;
			}
			if(s1[i]=='u'){
				u++;
			}
			if(s1[i]=='r'){
				r++;
			}
		}
		arr[0]=B;
		arr[1]=u/2;
		arr[2]=l;
		arr[3]=b/2;
		arr[4]=a/2;
		arr[5]=s;
		arr[6]=r;
		sort(arr,arr+6);
		cout<<arr[0]<<endl;
		return 0;
	}
