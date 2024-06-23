#include<stdio.h>
#include<math.h>
int main()
{
	float num,power,ans;
	printf("\nEnter Number=");
	scanf("%f",&num);
	printf("\nEnter power=");
	scanf("%f",&power);
	ans=pow(num,power);
	printf("\n%f^%f=%.2f",num,power,ans);
		
	
	
	
	
	return 0;
}
