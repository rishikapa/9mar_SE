#include<stdio.h>
main()
{
	int i;
	printf("enter the number-->");
	scanf("%d",&i);
	
	(i%2) ?	printf("%d is odd number",i): printf("%d is even number",i);
}
