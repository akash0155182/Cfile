#include<stdio.h>
#include<math.h>
int main()
{
	int l,b,a,s,x,y,z,r;
	float p=3.14;
	printf("length of the rectangle=");
	scanf("%d",&l);
	printf("breath of the rectangle=");
	scanf("%d",&b);
	printf("area of the rectangle=%d",l*b);
	printf("\n side of the square=");
	scanf("%d",&a);
	printf("area of the square=%d",a*a);
	printf("\n enter side of triangle=");
	scanf("%d%d%d",&x,&y,&z);
	s=(x+y+z)/2;
	printf("side of the triangle=");
	scanf("%d%d%d",&x,&y,&z);
	sqart(s*(s-x)*(s-y)*(s-z));
	printf("area of the triangle=%d\n",sqart);
	printf("\n radius of the circle=");
	scanf("%d",&r);
	printf("area of the circle=%d",p*r*r);
	return(0);
	
	
}
