#include<stdio.h>
main()
{
	int num,sum=0,i;
	printf("enter the a happy number");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
	{
		printf("perfect no ");
	}
	else
		printf("not perfect no");
}
