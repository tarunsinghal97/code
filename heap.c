#include <stdio.h>
#include <stdlib.h>


void heapify(int arr[],int l,int n)
{
	int lc = 2*l;
	int rc = 2*l+1;
	int lar = l;
	if(lc>=n)
		return;
	if(lc<n && arr[lc]>arr[l])
		lar = lc;
	else if(rc<n && arr[rc]>arr[lar])
		lar = rc;
	if(lar!=l)
	{
		int t;
		t = arr[l];
		arr[l]=arr[lar];
		arr[lar]=t;
		heapify(arr,lar,n);
	}
}

void buildheap(int arr[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		heapify(arr,i,n);
}

void heapsort(int arr[],int n)
{
	int i;
	int size=n;
	buildheap(arr,n);
	for(i=n;i>=1;i--)
	{
		int t;
		t = arr[1];
		arr[1]=arr[i];
		arr[i]=t;
		size--;
		heapify(arr,1,size);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	int arr[n+1],i;
	for(i=1;i<n+1;i++)
		scanf("%d",&arr[i]);
	heapsort(arr,n);
	for(i=1;i<=n;i++)
		printf("%d ",arr[i]);
	return 0;
}
