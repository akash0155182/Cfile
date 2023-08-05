#include<stdio.h>
main()
{   
	int num,i,sum=0,r;
	printf("enter the number");
	scanf("%d",&num);
	while(sum!=1&&sum!=4)
	{   
		sum=0;
		while(num!=0)
		{
			r=num%10;
			sum=sum+r*r;
			num=num/10;
		}
		num=sum;
	}
	if(sum==1)
		printf("happy no");
	else
		printf("not happy no");
}
