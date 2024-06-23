#include<stdio.h>
//POINTER TO POINTER .
int main()
{
	int fno=5;
    int *p1;
	int **p2;
    p1=&fno;
    p2=&p1;
	printf("\n ADDRESS OF FNO=%u",&fno);
	
	printf("\n ADDRESS OF POINTER P1=%u",&p1);
	
	printf("\n ADDRESS OF POINTER P2=%u",&p2);
	
	
	printf("\n ADDRESS OF FNO USING POINTER P1=%u",p1);
	
	printf("\n ADDRESS OF POINTER P1 USING P2=%u",p2);
	
	
	printf("\n VALUE OF FNO=%d",fno);
	
	printf("\n VALUE OF FNO USING POINTER P1=%d",*p1);
	
	printf("\n VALUE OF FNO USING POINTER P2=%d",**p2);
	

	return 0;
}
