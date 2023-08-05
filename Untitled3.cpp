#include<stdio.h>
#include<math.h>

int main()
{   float radius;
     float area;
     printf("enter the radius of the circle\n");
     scanf("%f",&radius);
     
    area=M_PI *radius * radius;
    printf("area of the circle = %f",area);
    return 0;
}
