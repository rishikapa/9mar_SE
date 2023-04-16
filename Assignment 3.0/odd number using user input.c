#include<stdio.h>
main()
{
	int i,a;
	printf("enter the number-->");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2 == 1)
		{
			printf("\n%d is odd number",i);
			
		}
	}
}
