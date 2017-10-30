#include <stdio.h>
int solve(int n,int arr[][n],int col);
int solvenq()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			arr[i][j]=0;
	if(solve(n,arr,0))
	{
		printf("Sorry You Can't Place NQUEENS\n");
		return 0;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	}
}

int IsSafe(int n,int arr[][n],int i,int col)
{
	int k,j;
	for(k=0;k<n;k++)
		if(arr[k][col]==1)
			return 0;
	for(k=0;k<n;i++)
		if(arr[i][k]==1)
			return 0;
	for(k=i,j=col;k>=0,j>=0;j--,k--)
		if(arr[k][j]==1)
			return 0;
	for(k=i,j=col;k<n,j>=0;k++,j--)
		if(arr[k][j]==1)
			return 0;
	return 1;
}

int solve(int n,int arr[][n],int col)
{
	int i,j;
	if(col>=n)
		return 1;
	for(i=0;i<n;i++)
	{
		if(IsSafe(n,arr,i,col))
		{
			arr[i][col]=1;
			if(solve(n,arr,col+1))
				return 1;
			arr[i][col]=0;
		}
	}
	return 0;
}



int main()
{
	solvenq();
	return 0;
}
