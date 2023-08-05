#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,avg;
	printf("enter the mark\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	printf("avg mark=%d\n",avg);
	if(avg>=50)
	printf("pass");
	else
	printf("fail");
	return(0);
}

