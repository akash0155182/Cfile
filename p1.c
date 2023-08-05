#include<stdio.h>
voidfun1(int );
voidfun2(int );
void main( )
{
fun1(1);
}
void fun1(int a)
{
if(a<5)
{
    printf(“%d\t”,a);
    fun2(++a);
    printf(“%d\t”,a);
}
}
void fun2(int a)
{
if(a<5)
{
    printf(“%d\t”,a);
    fun1(a+2);
    printf(“%d\t”,a);
}
}
