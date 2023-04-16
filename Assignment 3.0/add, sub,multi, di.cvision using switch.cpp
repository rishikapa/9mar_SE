#include<stdio.h>
main()
{
	int a,b;
	char choice;
	
	printf("a. addition\nb.substraction\nc.multiplication\nd.division\n");
		scanf("%c",&choice);
		printf("enter two numbers");
	scanf("%d %d",&a,&b);
	
	
	switch(choice)
	{
		case 'a':
		printf("%d + %d =%d\n",a,b,(a+b));
		break;
		
		case 'b':
		printf("%d - %d =%d\n",a,b,(a-b));
		break;
		
		case 'c':
		printf("%d * %d =%d\n",a,b,(a*b));
		break;
		
		case 'd':
		printf("%d / %d =%d\n",a,b,(a/b));
		break;
		
		
		
		
		

		
	}
	
}
