/*#include<stdio.h>
int main()
{
	int i=0,j=1,sum,t,n=1;
	printf("\nPrint Fibonacci up to given term");
	printf("\nEnter Term Up to have to print fibonacci");
	scanf("%d",&t);
	printf("\n%d",i);
	printf("\n%d",j);
	while(n<=t)
	{
		sum=i+j;
		printf("\n%d"sum);
		i=j;
		j=sum;
		n=n+1;
	}
	
	
	
	return 0;
}*/
#include<stdio.h>
int main()
{
	 int i=0,j=1,sum,t;
	printf("\nPrint Fibonacci up to given term");
	printf("\nEnter Term Up to have to print fibonacci");
	scanf("%d",&t);
	printf("\n%d",i);
	printf("\n%d",j);
	while(t>0)
	{
		sum=i+j;
		printf("\n%d",sum);
		i=j;
		j=sum;
		t=t-1;
	}
	
	
	return 0;
}
