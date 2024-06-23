#include<stdio.h>
int main()
{
	int i=34,j=21,sum=1;
	printf("\nFibonacci Reverse from(34-0)");
	printf("\n%d",i);
	printf("\n%d",j);
	while(sum>0)
	{
		sum=i-j;
		printf("\n%d",sum);
		i=j;
		j=sum;
	}
	
	return 0;
}
