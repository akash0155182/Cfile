#include<stdio.h>
int main()
{
	int num1[10][10],num2[10][10],num3[10][10],i,j,m,n,x,y;
	printf("enter the oder of 1st matrix :");
	scanf("%d%d",&m,&n);
	printf("enter the 2nd order matrix :");
	scanf("%d%d",&x,&y);
	if(x==m&&y==n)
	{
		printf("enter element of 1st matrix :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			scanf("%d",&num1[i][j]);
		}
		printf("enter the 2nd matrix :\n");
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			scanf("%d",&num1[i][j]);
		}
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			num3[i][j]=num1[i][j]+num2[i][j];
		}
		printf("sum of matrix is :\n");
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				printf("%d  ",num3[i][j]);
			}
			printf("\n\n");
		}
	}
	return 0;
}
