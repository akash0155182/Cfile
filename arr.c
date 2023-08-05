#include<stdio.h>
main()
{
	int i,a[10];
	printf("enter the array element");
	for(i=0;i<=9;i++)
	{ 
	   scanf("%d",&a[i]);
	}
	printf("array elements are");
	for(i=0;i<=9;i++)
	{
		printf("%d",a[i]);
	}
}
