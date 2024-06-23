#include<stdio.h>
int main()
{
	int fno,sno,tno;
	int *p1,*p2,*p3;
	p1=&fno;
	p2=&sno;
	printf("\nEnter Two Numbers =");
	scanf("%d%d",p1,p2);
	p3=&tno;
	*p3=*p1+*p2;
	printf("\n SUM=%d",*p3);
	
	
		
	
	
	
	return 0;
}
