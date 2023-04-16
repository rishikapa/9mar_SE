#include<stdio.h>
main()
{
	int n,fd,ld,sum=0;
	printf("enter the number-->");		// print the value
	scanf("%d",&n);						// scan the value
	
	ld = n%10;							//% divided by 10 returns the last digit of number
	
	while(n>=10)						//find the first digit divided by 10 where n greater then 10
	{
		n=n/10;
	}
	fd=n;	
	
	sum=fd+ld;							// calculate first and last digit
	
	printf("sum of first and last digit number %d",sum);	//print the sum
}
