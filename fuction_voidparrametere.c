#include<stdio.h>
void operation(char symbol)
{
	int fno,sno;
	printf("\nENTER TWO NUMBERS=");
	scanf("%d%d",&fno,&sno);
	if(symbol=='+')
	{
		printf("\n%d",fno+sno);
	}
	else
	{
			if(symbol=='-')
			printf("\n%d",fno-sno);
			else
			printf("\n%d",fno*sno);
			
	}
}
int main()
{
	char symbol;
	printf("\nEnter Any SYMBOL +,-,*	:");
	scanf("%c",&symbol);
	operation(symbol);
	
	return 0;
}
