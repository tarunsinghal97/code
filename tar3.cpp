#include <bits/stdc++.h>
using namespace std;
#define N 10000000
 
string str;
int H = 0, Bucket[N], nBucket[N], c;
 
struct Suffix{
	int idx;
	bool operator<(const Suffix& sfx) const
	{
		if(H == 0) return str[idx] < str[sfx.idx];
		else if(Bucket[idx] == Bucket[sfx.idx]) 
			return (Bucket[idx+H] < Bucket[sfx.idx+H]);
		else
			return (Bucket[idx] < Bucket[sfx.idx]);
	}
	bool operator==(const Suffix& sfx) const
	{
		return !(*this < sfx) && !(sfx < *this);
	}
} Pos[N];
 
int UpdateBuckets(int L)
{
	int start = 0, id = 0, c = 0;
	for(int i = 0; i < L; i++)
	{
		if(i != 0 && !(Pos[i] == Pos[i-1]))
		{
			start = i;
			id++;
		}
		if(i != start) 
			c = 1;
		nBucket[Pos[i].idx] = id;
	}
	memcpy(Bucket, nBucket, 4 * L);
	return c;
}
 
void SuffixSort(int L)
{
	for(int i = 0; i < L; i++) Pos[i].idx = i;
	sort(Pos, Pos + L);
	c = UpdateBuckets(L);
	for(H=1;c;H *= 2) {
		sort(Pos, Pos+L);
		c = UpdateBuckets(L);
	}
}
 
vector<int> kasai(string txt, vector<int> suffixArr)
{
    int n = suffixArr.size();
    vector<int> lcp(n, 0);
    vector<int> invSuff(n, 0);
 
    
    for (int i=0; i < n; i++)
        invSuff[suffixArr[i]] = i;
    int k = 0;
    for (int i=0; i<n; i++)
    {
        if (invSuff[i] == n-1)
        {
            k = 0;
            continue;
        }
        int j = suffixArr[invSuff[i]+1];
        while (i+k<n && j+k<n && txt[i+k]==txt[j+k])
            k++;
 
        lcp[invSuff[i]] = k; 
        if (k>0)
            k--;
    }
    return lcp;
}

int main()
{
	
	string s1;
	cin>>s1;
	str = s1;
	int L = str.length() + 1;
	vector<int>suffixArr;
    int n = suffixArr.size();;
	SuffixSort(L);
	for(int i = 1; i < L; i++)
	{
		suffixArr.push_back(Pos[i].idx);
		cout << str.substr(Pos[i].idx) << " " << Pos[i].idx<<endl;
	}
	 vector<int>lcp = kasai(str, suffixArr);
	//  int q;
	//  cin>>q;
	//  while(q--)
	//  {
	//  	int a;
	//  	cin>>a;
	 	
	 int maxi=0;
    for (int i = 0; i < L-1; i++)
    {
    // 	if(((Pos[i+1].idx>(str.length()-a-1) && Pos[i+2].idx==0) || (Pos[i+1].idx==0 && Pos[i+2].idx>(str.length()-a-1))))
   	// {
    		//cout<<Pos[i+1].idx<<" "<<Pos[i+2].idx<<endl;
    		//maxi = max(maxi,lcp[i]);
    	//if(lcp[i]==0)
    		maxi+=lcp[i];
    	//}
        cout << lcp[i] << " ";
    }
    cout << endl;
    cout<<maxi<<endl;

	return 0;
}
