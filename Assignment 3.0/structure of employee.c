#include<stdio.h>
struct person
{
	int empno,age;
	char name[20],address[20];
	
};
main()
{
	struct person p;
	printf("enter your empno-->\n");
	scanf("%d",&p.empno);

	
	printf("enter your name-->\n");
	scanf("%s",&p.name);
	
	
	printf("enter your address-->\n");
	scanf("%s",&p.address);

	
	printf("enter your age-->\n");
	scanf("%d",&p.age);
	
	
		printf("\n age is  %d" ,p.empno);
		printf("\n name is %s",p.name);
		printf("\n address is %s",p.address);
		printf("\n sallary is %d",p.age);
}
