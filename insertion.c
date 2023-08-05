#include<stdio.h>
main ()
{
	int a[6],position,element,i;
	printf("enter the array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position you want to insert");
	scanf("%d",&position);
    printf("enter the elements");
	scanf("%d",&element);
	for(i=4;i>=position;i--)
	{
	   a[i+1]=a[i];	
	}
	a[position]=element;
	for(i=0;i<=5;i++)
	{
	   printf("%d",a[i]);	
	}	
}
