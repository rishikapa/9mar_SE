#include<stdio.h>
main()
{
	int i,a,sum = 0;
	
	printf("enter the number-->");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2 == 0)
		{
			sum = sum + i;
			printf("\n%d",i);
		}
	}
	printf("\nSum of even number is ; %d",sum);

}

