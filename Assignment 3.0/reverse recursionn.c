#include<stdio.h>
int recvers(int x)
{
	if(x>=1)
	{
		printf("\n%d",x);
		recvers(x-1);
	}
	
}
main()
{
	recvers(10);
}
