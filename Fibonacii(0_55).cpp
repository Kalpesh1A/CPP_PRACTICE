#include<stdio.h>
int main()
{
	int i=0,j=1,sum=0;
	printf("\nProgramm to print Fibonacci up to 55");
	while(sum<=55)
	{
		printf("\n%d",sum);
		i=j;
		j=sum;
		sum=i+j;
		
	}
	
	
	return 0;
}
