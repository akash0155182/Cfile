#include<stdio.h>
main()
{
	int num,i,c=0;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			c++;
			break;
		}
	}
	if(c==1)
		printf("prime");
	else
		printf("not prime");
}
