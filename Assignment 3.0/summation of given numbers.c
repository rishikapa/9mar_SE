#include<stdio.h>
main()
{
	int n,sum=0,rem;
	printf("enter the number:-->"); //input number from user
	scanf("%d",&n);
	
	while(n!=0) //repeat till when number value is 0
	{
		sum += n%10; // last digit ofnumber to add sum
	
		n=n/10;//remove last digit from number
	}
		printf(" sum of digits =%d",sum);   //print sum of digits
}

