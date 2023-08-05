#include<stdio.h>
int main()
{
    int n,sum=0,rem,m;
    printf("enter the number :");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    if(m==sum)
    {
	printf("the number is a palindrome ");}

    else
    printf("it is not a palindrome");
    return 0;
}
