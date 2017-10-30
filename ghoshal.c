#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("input.txt", "r");
	double tar[100][100];
	char s[100][100];
	int k=0;
	while(!feof(fp))
	{
		int f=0;
		
		double arr[6];
		int i=0;
		for(i=0;i<3;i++)
		{
			if(i==0)
			{
				char c[3];
				fscanf(fp,"%s" , c);
				if(c[0]=='x')
				{
					f=1;
					break;
				}
				else
				{
					s[i][0]=c[0];
					s[i][1]=c[1];
				}

			}
			else
			{
				fscanf(fp,"%lf" , &arr[i]);
				tar[k][i-1]=arr[i];
			}
			
		}
		if(f==1)
				break;
		k++;
	}
	int i=0,j=0;
	double arrival[k+8];
	double burst[k+8];
	double wait[k+8];
	wait[0]=0;
	double tat[k+8];
	for(i=0;i<k;i++)
	{
		burst[i] = tar[i][1];
		if(i==0)
			arrival[i]=tar[i][0];
		else
			arrival[i]=tar[i][0]+arrival[i-1];
		printf("%lf  %lf\n",arrival[i],burst[i]);
	}
	for(i=1;i<k;i++)
	{
		wait[i]=0;
		for(j=0;j<i;j++)
		{
			wait[i]+=burst[j];
		}
	}
	for(i=0;i<k;i++)
		tat[i]=wait[i]+burst[i];
	for(i=0;i<k;i++)
	{
		//printf("%lf   %lf\n",wait[i],tat[i]);
	}

}