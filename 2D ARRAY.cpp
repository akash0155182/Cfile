#include<stdio.h>
int main()
{
	int num[10][10];
	int m,n,i,j,temp;
	printf("enter the row and column size : ");
	scanf("%d%d",&m,&n);
	printf("enter matrix element : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&num[i][j]);
	}
	printf("the matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%4d",num[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			temp=num[i][j];
			num[i][j]=num[j][i];
			num[j][i]=temp;
		}
	}
	printf("the reverse matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%4d",num[i][j]);
		printf("\n");
	}

}
