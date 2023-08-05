#include<stdio.h>
 main()
{
	double n1,n2;
	char op;
	double result;
	printf("\n*****CALCULATOR*****");
	printf("\n enter 1st number: ");
	scanf("%f",&n1);
	printf("\n enter 2nd number: ");
	scanf("%f",&n2);
	printf("\n enter the operation: ");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		      result=n1+n2;
		      printf("\n addition =%f,result");
		break;
		case '-':
		      result=n1-n2;
		      printf("\n substraction =%f,result");
		break;
		case '*':
		      result=n1*n2;
		      printf("\n multiplication =%f,result");
		break;
		case '/':
		      result=n1/n2;
		      printf("\n division =%f,result");
		break;
	}
	return 0;
	
}
