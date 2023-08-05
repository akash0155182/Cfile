#include<stdio.h>
main()
{
   int row,col,i,j,a[10][10],count;
   printf("Enter row\n");
   scanf("%d",&row);
   printf("Enter Column\n");
   scanf("%d",&col);
   printf("Enter Element of Matrix1\n");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++)
	  {
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   count=1;
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++)
	  {
        if(i<j&&array[i][j]!=0)
		 {
		 count=0;	
		 }
      }
   }
   if(count==0);
   {
   printf("\nthe upper matrix triangular matix.\n");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++)
	  {
         printf("%d",a[i][j]);
      }
   }
   printf("\n");
}
else
{
	printf("\nThe matrix is not Upper triangular matrix.");
}
}
}
