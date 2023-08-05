#include<stdio.h>
int main()
{
	int num1,num2,hcf,lcm,i;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	for(i=1;i<=num1;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
	}
	lcm=(num1*num2)/hcf;
	printf("hcf=%d and lcm=%d",hcf,lcm);
	return 0;
}
