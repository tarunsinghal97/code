#include<bits/stdc++.h>
using namespace std;
int calculateMex(unordered_set<int> Set)
{
	int Mex = 0;

	while (Set.find(Mex) != Set.end())
		Mex++;

	return (Mex);
}
int calculateGrundy(int n)
{
	if (n == 0)
		return (0);

	unordered_set<int> Set;

	for (int i=0; i<=n-1; i++)
		Set.insert(calculateGrundy(i));

	return (calculateMex(Set));
}
int main()
{
	int arr[100],n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i] = calculateGrundy(arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum = sum^arr[i];
	}
	printf("%d",sum);
	return (0);
}

