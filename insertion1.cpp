#include<stdio.h>
main()
{
	int a[10],position,elements,n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position you want to insert\n");
	scanf("%d",&position);
	printf("enter the elements ");
	scanf("%d",&elements);
	for(i=position-1;i>=n;i--)
	{
		a[i+1]=a[i];
	}
	a[position]=elements;
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}	 
}
