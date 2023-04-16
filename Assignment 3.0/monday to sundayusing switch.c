#include<stdio.h>
main()
{
	int num;
	char day;
	
	printf("enter the num-->");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		printf("sunday");
		break;
		
		case 2:
		printf("monday");
		break;
		
		case 3:
		printf("tueday");
		break;
		
		case 4:
		printf("wednesday");
		break;
		
		case 5:
		printf("thurday");
		break;
		
		case 6:
		printf("friday");
		break;
		
		case 7:
		printf("saturday");
		break;
				
		default:
		printf("error");
				
	}
	 
}   
