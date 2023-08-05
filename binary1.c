#include<stdio.h>
int binarysearch(int a[], int n, int data)
{
	int l=0,r=n-1,mid;
	while(l<r)
	{     mid=(l+r)/2;
		if(data==a[mid])
		    return mid;
		else if(data<a[mid])
		    return r=mid-1;
		else
		    return r=mid+1;
	}
	return -1;
	
}
int main()
{
	int a[]={11,12,13,23,34,45,60,72};
	int n=7;
	int data;
	printf("enter the data you want to search");
	scanf("%d",&data);
	int found=binarysearch(a,n,data);
	if(found==-1)
	{
		printf("element not found");
	}
	else
	   printf("element found is %d",found);
}
