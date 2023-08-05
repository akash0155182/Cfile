#include <stdio.h> 
void main() 
{ 
 char a=’/’; 
 int x=5,y=2; 
 float z; 
switch(a) 
{ 
default:printf(“No match”); 
 break; 
case ‘*’:z=x*y; 
 break; 
case ‘+’:z=x+y; 
 break; 
case ‘/‘: z=x/y; 
} 
printf(“%f”,z); } 
