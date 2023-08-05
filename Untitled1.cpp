#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("enter length of AB");
	scanf("%d",&a);
	printf("enter length of BC");
	scanf("%d",&b);
	printf("enter length of CA");
	scanf("%d",&c);
	
	s= a+b+c/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of the traingle is : %d",area);
	return 0;
	
}
