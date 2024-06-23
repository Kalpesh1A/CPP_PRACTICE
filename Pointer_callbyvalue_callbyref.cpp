#include<stdio.h>
//SWAPPING USING POINTER CALL BY VALUE & CALL BY REFERENCE
							
	void swap1(int a,int b )			// CALL BY VALUE.==>main fuction values no effect 
	{
		int temp;
		temp=a;
		a=b;
		b=a;
	}							
	void swap2(int *a,int *b)		//CALL BY REFERENCE.==>main fuction values effect due to change on address
	{
		int temp;
		temp=*a;
		*a=*b; 
		*b=temp;
	}						
							
	int main()
	{
		int fno,sno;
		printf("\n ENTER FNO=");
		scanf("%d",&fno);
		printf("\n ENTER SNO=");
		scanf("%d",&sno);
		swap1(fno,sno);
		printf("\n AFTER CALLING CALL BY VALUE :");
		printf("\n FNO=%d",fno);
		printf("\n SNO=%d",sno);
		swap2(&fno,&sno);
		printf("\n AFTER CALLING CALL BY REFERENCE:");
		printf("\n FNO=%d",fno);
		printf("\n SNO=%d",sno);

		
		
		return 0;
	}