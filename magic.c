#include<stdio.h>
main()
{
	int n,r,sum=0,m,rev=0;
	printf("enter a number");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		r=m%10;
		sum=sum+r;
		m=m/10;
	}
	m=sum;
	while(m>0)
	{
		r=m%10;
		rev=rev*10+r;
		m=m/10;
	}
	if(rev*sum==n)
		{
			printf("%d is a magic no",n);
		}
	else
		printf("it is no a magic number");
}
