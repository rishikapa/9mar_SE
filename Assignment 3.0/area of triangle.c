#include<stdio.h>
main()
{
	float area,base,height;
	printf("enter the value of base");
	scanf("%f",&base);
	
	printf("enter the value of height");
	scanf("%f",&height);
	
	area=(base*height)/2;
	printf("area of triangle %f",area);
}
