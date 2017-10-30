#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 1000000007
lli func(int idx,int last,string s)
{
	lli num=0;
	for(int i=idx;i<last;i++)
	{
		num=num*10+s[i]-'0';
	}
	return num;

}
#define mp pair<lli,pair<lli,pair<lli,pair<lli,pair<lli,pair<lli,pair<lli,pair<lli,pair<lli,pair<lli,lli> > > > > > > > > >
map<mp,vector<lli> >dp;

vector<lli> solve(lli idx,lli tight,lli one,lli two,lli three,lli four,lli five,lli six,lli seven,lli eight,lli nine,string s,lli n)
{

	if(idx>=n)
	{
		vector<lli>v2(9);
		v2[8] = nine;
		v2[0] = one;
		v2[1] = two;
		v2[2] = three;
		v2[3] = four;
		v2[4] = five;
		v2[5] = six;
		v2[6] = seven;
		v2[7] = eight;
		return v2;
	}
	else if(dp.find(make_pair(idx,make_pair(tight,make_pair(one,make_pair(two,make_pair(three,make_pair(four,make_pair(five,make_pair(six,make_pair(seven,make_pair(eight,nine)))))))))))!=dp.end())
		return dp[make_pair(idx,make_pair(tight,make_pair(one,make_pair(two,make_pair(three,make_pair(four,make_pair(five,make_pair(six,make_pair(seven,make_pair(eight,nine))))))))))];


	else if(tight==1)
	{
		vector<lli>v1(9,0);
		for(lli i=0;i<=s[idx]-'0';i++)
		{
			lli on=one,tw=two,th=three,fo=four,fi=five,si=six,se=seven,ei=eight,ni=nine;

			if(i==(s[idx]-'0'))
			{
				if(i==1)
					on += func(idx+1,s.length(),s)+1;
				if(i==2)
					tw += func(idx+1,s.length(),s)+1;
				if(i==3)
					th += func(idx+1,s.length(),s)+1;
				if(i==4)
					fo += func(idx+1,s.length(),s)+1;
				if(i==5)
					fi += func(idx+1,s.length(),s)+1;
				if(i==6)
					si += func(idx+1,s.length(),s)+1;
				if(i==7)
					se += func(idx+1,s.length(),s)+1;
				if(i==8)
					ei += func(idx+1,s.length(),s)+1;
				if(i==9)
					ni += func(idx+1,s.length(),s)+1;
				vector<lli>v;
				v = solve(idx+1,1,on,tw,th,fo,fi,si,se,ei,ni,s,n);
				for(lli i=0;i<9;i++)
					v1[i] += v[i];

			}
			else
			{
				if(i==1)
				on += pow(10,n-idx-1);
			if(i==2)
				tw += pow(10,n-idx-1);
			if(i==3)
				th += pow(10,n-idx-1);
			if(i==4)
				fo += pow(10,n-idx-1);
			if(i==5)
				fi += pow(10,n-idx-1);
			if(i==6)
				si += pow(10,n-idx-1);
			if(i==7)
				se += pow(10,n-idx-1);
			if(i==8)
				ei += pow(10,n-idx-1);
			if(i==9)
				ni += pow(10,n-idx-1);
				vector<lli>v;
				v = solve(idx+1,0,on,tw,th,fo,fi,si,se,ei,ni,s,n);
				for(lli i=0;i<9;i++)
					v1[i] += v[i];
			}
		}
		 dp[make_pair(idx,make_pair(tight,make_pair(one,make_pair(two,make_pair(three,make_pair(four,make_pair(five,make_pair(six,make_pair(seven,make_pair(eight,nine))))))))))]=v1;
		return v1;

	}
	else
	{
		vector<lli>v1(9,0);

		for(lli i=0;i<=9;i++)
		{
			lli on=one,tw=two,th=three,fo=four,fi=five,si=six,se=seven,ei=eight,ni=nine;
			vector<lli>v;
			if(i==1)
				on += pow(10,n-idx-1);
			if(i==2)
				tw += pow(10,n-idx-1);
			if(i==3)
				th += pow(10,n-idx-1);
			if(i==4)
				fo += pow(10,n-idx-1);
			if(i==5)
				fi += pow(10,n-idx-1);
			if(i==6)
				si += pow(10,n-idx-1);
			if(i==7)
				se += pow(10,n-idx-1);
			if(i==8)
				ei += pow(10,n-idx-1);
			if(i==9)
				ni += pow(10,n-idx-1);
			v = solve(idx+1,0,on,tw,th,fo,fi,si,se,ei,ni,s,n);
			for(lli i=0;i<9;i++)
				v1[i] += v[i];
		}
		 dp[make_pair(idx,make_pair(tight,make_pair(one,make_pair(two,make_pair(three,make_pair(four,make_pair(five,make_pair(six,make_pair(seven,make_pair(eight,nine))))))))))]=v1;
		return v1;
	}


}


int main()
{
	while(1)
	{

		string a,b;
		cin>>a>>b;
		if(a=="0" && b=="0")
			break;
		dp.clear();
		vector<lli> v3 = solve(0,1,0,0,0,0,0,0,0,0,0,b,b.length());
		dp.clear();
		vector<lli> v4 = solve(0,1,0,0,0,0,0,0,0,0,0,a,a.length());
		for(lli i=0;i<a.length();i++)
		{
			if(a[i]!='0')
				v3[a[i]-'1']++;
		}
		for(lli i=0;i<9;i++)
		{
			cout<<v3[i]<<" "<<v4[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
