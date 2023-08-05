#include<stdio.h>
int main()
struct product
{
	int pid,rat;
	float pr,wt;
};
int main()
{
	struct product p;
	printf("enter the book details:\n");
	printf("enter the product id\n");
	scanf("%d",&p.pid);
	printf("enter the price\n");
	scanf("%f",&p.pr);
	printf("enter the weight\n");
	scanf("%f",&p.wt);
	printf("enter the rating\n");
	scanf("%d",&p.rat);
}display(p);
int display(struct product p)
{
		printf("pid=%d",p.pid);
		printf("price=%f",p.pr);
		printf("weight=%f",p.wt);
		printf("rating=%d",p.rat);
}
