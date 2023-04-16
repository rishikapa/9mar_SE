#include<stdio.h>
main()
{
	int a,b;
	int n1=0, n2=1;   //intilize the 
	int f=n1+n2;     
	printf("enter the number-->");
	scanf("%d",&b);
	printf("fibonacci series: %d %d ",n1,n2);
	
	for(a=3;a<=b;++a)
	{
		printf("%d,",f);
		n1=n2;
		n2=f;
		f=n1+n2;
	}
	
	
	 
	
}

