 #include<stdio.h>
 void printArray(int*arr,int n)
 {
 	for(int i=0;i<=n;i++)
 	{
 		printf("%d",arr[i]);
	}
	printf("\n");
 }                
  int partition( int*arr, int lb, int up)/* partition*/
{
	int pivot=arr[lb];
	int start=lb;
	int end=up;
	int temp;
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}
	}
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	return end;
}
quick_sort(int arr[],int lb,int up)
{   int loc;
	if(lb<up)
	{
	   loc=partition(arr,lb,up);
		quick_sort(arr,lb,loc-1);/*left sub array*/
		quick_sort(arr,loc+1,up);/*right sub array*/
	}
}
int main()
{   
    int n=6;
	int arr[]={3,7,1,6,8,9,10};
	printArray(arr,n);
	quick_sort(arr,0,n-1);
	printArray(arr,n);
	return 0;
	
}

