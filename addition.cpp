#include<stdio.h>
 main()
 {
 	int a[10][10],b[10][10],c[10][10],i,j,m,n;
 	printf("enter the row and column size\n");
 	scanf("%d%d",&m,&n);
 	printf("enter the first array\n");
 	for(i=0;i<m;i++)
 	 {
 	 	for(j=0;j<n;j++)
 	 	scanf("%d",&a[i][j]);
	  }
	printf("enter the second array\n");
	for(i=0;i<m;i++)
 	 {
 	 	for(j=0;j<n;j++)
 	 	scanf("%d",&b[i][j]);
	  }
	  for(i=0;i<m;i++)
 	 {
 	 	for(j=0;j<n;j++)
 	 	c[i][j]=a[i][j]+b[i][j];
	  }
	  printf("\n");
	  printf("elements are");
	  for(i=0;i<m;i++)
 	 {  printf("\n");
 	 	for(j=0;j<n;j++)
 	 	printf("%d",c[i][j]);
	  }
 	
 	
 }
