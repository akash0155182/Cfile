#include<stdio.h>
#include<math.h>
int main()
{
	int a,d,n,i,tn;
	int sum=0;
	printf("enter the first AP series: ");
	scanf("%d",&a);
	printf("enter the total no in AP series: ");
	scanf("%d",&n);
	printf("enter the common diffrence of AP series: ");
	scanf("%d",&d);
	sum = (n*(2*a+ (n-1)*d))/2;
	tn =a+(n-1)*d;
	printf("sum of the series AP : ");
	for(i=a;i<=tn;i=i+d)
	{
		if(i !=tn)
		printf("%d +",i);
		else
		printf("%d=%d",i,sum);
	}
	return 0;
	
}
