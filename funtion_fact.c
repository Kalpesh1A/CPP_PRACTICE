#include<stdio.h>
#include<math.h>

int factr(int num)
{	
	int y,fact;
	y=num-1;
	if(num==0)
	{
		return 1;
	}
	else
	{
		for(y;y>0;y--)
		{
			num=num*y;
		}
		return num;
	}
}
int main()
{
	int num;
	printf("\nEnter Number=");
	scanf("%d",&num);
	printf("\n%d",factr(num));

	
		
	
	
	
	
	
	return 0;
}
