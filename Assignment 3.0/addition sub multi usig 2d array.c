#include<stdio.h>
main()
{
	int a[2][3]={12,78,59,45,77,78};
	int b[2][3]={6,56,45,42,73,75};
	int c[2][3];
	int row,col;
	
	printf("\n addition of matrix--\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
			{
				c[row][col]=a[row][col]+b[row][col];
				printf(" %d ",c[row][col]);			
			}
			printf("\n");
	}



	    printf("\n substraction of matrix--\n");
		for(row=0;row<2;row++)
	{
			for(col=0;col<3;col++)
			{
				c[row][col]=a[row][col]-b[row][col];
				printf(" %d ",c[row][col]);			
			}
				printf("\n");
	}
	    printf("\n mutiplication of matrix--\n");
  		for(row=0;row<2;row++)
	{
			for(col=0;col<3;col++)
			{
				c[row][col]=a[row][col]*b[row][col];
				printf(" %d ",c[row][col]);			
			}
				printf("\n");
	}
}

