#include<stdio.h>
struct employee
{
	int empno,age;
	char name[20],address[20];
	
}emp[20];
main()
{
	int i,n=5;
	
	printf("enter employee info as emp no,name,age,address\n");
	for(i=0;i<5;i++)
	{
	struct employee p;
	printf("\nenter your emp no-->\n");
	scanf("%d",&p.empno);

	
	printf("\nenter your name-->\n");
	scanf("%s",&p.name);
	
	
	printf("\nenter your address-->\n");
	scanf("%s",&p.address);

	
	printf("enter your age-->\n");
	scanf("%d",&p.age);
	
	
		printf("\n age is  %d" ,p.empno);
		printf("\n name is %s",p.name);
		printf("\n address is %s",p.address);
		printf("\n age is %d",p.age);
	}
}


	
