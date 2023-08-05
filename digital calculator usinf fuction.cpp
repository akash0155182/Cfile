#include<stdio.h>
int add(int a,int b)
{
	int result;
	result = a+b;
	printf("addition of %d and %d = %d\n",a,b,result);
}

int sub(int a, int b)
{
	int result;
	result =a-b;
	printf("substraction of %d and %d =%d\n",a,b,result);
}

int mul(int a, int b)
{
	int result;
	result =a*b;
	printf("multiplication of %d and %d =%d\n",a,b,result);
}

int div(int a,int b)
{
	int result;
	result =a/b;
	printf("division of %d and %d =%d\n",a,b,result);
}

main()
{
	int ch;
	printf("enter 1 for addition\nenter 2 for substration\nenter 3 for multiplication\nenter 4 for division\nenter 5 for exist\n");
	scanf("%d",ch);
	if(ch == 1)
	{
		int num1, num2;
		printf("enter two numbers for addition : ");
		scanf("%d%d",&num1,&num2);
		add(num1,num2);
	}
	else if(ch == 2)
	{
		int num1, num2;
		printf("enter two numbers for substration : ");
		scanf("%d%d",&num1,&num2);
		sub(num1,num2);
	}
	else if(ch == 3)
	{
		int num1, num2;
		printf("enter two numbers for multiplication : ");
		scanf("%d%d",&num1,&num2);
		mul(num1,num2);
	}
	else if(ch == 4)
	{
		int num1, num2;
		printf("enter two numbers for division : ");
		scanf("%d%d",&num1,&num2);
		div(num1,num2);
	}
	else if(ch == 5)
	{
		printf("thanks for using calculator\n");
	}
	else
	{
		printf("please select right option");
	}
	return 0;
	
}

