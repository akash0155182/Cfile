#include<stdio.h>
void printArray(int*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}

void merge(int*arr,int lb,int mid,int ub)
{
	int i,j,k,b[100];
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++,k++;
		}
		else
		{
			b[k]=arr[j];
			j++,k++;
		}
	}
	
	while(i<=mid)
	{
		b[k]=arr[i];
		i++,k++;
	}
	while(j<=ub)
	{
		b[k]=arr[j];
		j++,k++;
	}
	for(i=lb;i<=ub;i++)
	{
		arr[i]=b[i];
	}
	
}
void mergeSort(int*arr,int lb,int ub)
{	int mid;
	if(lb<ub)
	{	mid=(lb+ub)/2;
		mergeSort(arr,lb,mid);
		mergeSort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
}
int main()
{
	int arr[]={9,1,4,14,4,15,6};
	int n=7;
	printArray(arr,n);
	mergeSort(arr,0,6);
	printArray(arr,n);
	return 0;
}
