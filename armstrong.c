#include<stdio.h>
main()
{
	int n,r,result=0,m;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		result=result+r*r*r;
		n=n/10;
	}
	m=n;
	if(result==m)
	{
		printf("%d is an armstrong number",m);
	}
	else
	 printf("it is not an armstrong number");
	 return 0;
}
