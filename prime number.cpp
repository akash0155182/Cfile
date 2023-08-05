
// C program to check if a
// number is prime
 
#include <math.h>
#include <stdio.h>
int main()
{
    int n, i,count = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (i = 2; i < sqrt(n); i++) 
        if (n % i == 0) {
            count++;
            if(count>0)
            break;
        }
    
 
    if (count==0)
        printf("%d is a prime number", n);
    
    else 
        printf("%d is not a prime number", n);
    
    return 0;
}
