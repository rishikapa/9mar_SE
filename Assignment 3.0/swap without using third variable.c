#include<stdio.h>
main()
{
	int a,b;
	printf("enter the number of a-->");
	scanf("%d",&a);
	
	printf("enter the number of b-->");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("the value of a--> %d",a);
	printf("\nthe value of b-->> %d",b);
}
