#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	int a[12][10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-5,0,0,1,1,0,0,0,-1,-1,0,-1,-1,-1,0,-1,-1,1,-1,-1,1,1,1,1,1,0,0,1,-1,-1,-1,0,0,0,-1,0,0,-1,-1,-1,0,-1,-1,1,-1,1,-1,-1,-1,-1,-1,0,0,0,0,1,0,0,-1,-1,0,-1,0,-1,1,1,-1,0,-1,-1,-1,-1,0,-1,1,-1,-1,-1,-1,-1,0,1,1,-1,1,1,0,0,-1,-1,0,-1,0,0,1,1,-1,5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	printf("\n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i][j]==-1)
			{
				printf("#\t");
			}
			else 
			{
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
}