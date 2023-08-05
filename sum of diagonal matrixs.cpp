#include<stdio.h>
int main()
{
	int num[10][10],i,j,m,n,sum=0;
	printf("enter the order of the  matrix :");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("enter element of the matrix :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			scanf("%d",&num[i][j]);
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				sum=sum+num[i][j];
			}
		}
		printf("sum of matrix is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d  ",num[i][j]);
			}
			printf("\n");
		}
		printf("\n sum of diagonal elements is %d",sum);
	}
	return 0;
}
