#include<stdio.h>
int main()
{
	
	int a,b,temp;
	printf("\n enter value of a:");
	scanf("%d",&a);
	printf("\n enter value of b:");
	scanf("%d",&b);
	printf("\n before change , a=%d,b=%d",a,b);
	temp=a,a=b,b=temp;
	printf("\n after interchange ,a=%d,b=%d",a,b);
}
