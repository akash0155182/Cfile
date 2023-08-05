#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number  :  ");
	scanf("%d %d",&a,&b);
	while(a!=b)
	{
		if(a<b)
		a=a+b;
		else
		b=b+a;
	}
	printf("LCM of  %d and %d is %d\n",a,b,a);
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	printf("HCF of %d and %d is %d\n",a,b,a);
	return 0;
	
}
