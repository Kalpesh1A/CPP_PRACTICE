#include<stdio.h>
int main()
{
					//BASIC PROGRAMM USING POINTER %u & %p
	int num;
	int *ptr;
	printf("\nEnter The Number=");
	scanf("%d",&num);
	ptr=&num;
	printf("\nValue of Number is =%d",num);
	printf("\nValue of Number using pointer is =%d",*ptr);
	printf("\nAdderess of num is  =%u",&num);
	printf("\nAdderess of num using pointer is =%u",ptr);
	printf("\nAdderess of pointer is =%u",&ptr);

					//SWAPPING USING POINTER
//	int fno,sno,*ptr1,*ptr2,temp;
//	printf("\nEnter The Number=");
//	scanf("%d",&fno);
//	printf("\nEnter The Number=");
//	scanf("%d",&sno);
//	ptr1=&fno;
//	ptr2=&sno;
//	temp=*ptr1;
//	*ptr1=*ptr2;
//	*ptr2=temp;
//	printf("\n AFTER SWAP");
//	printf("\nFNO=%d",*ptr1);
//	printf("\nSNO=%d",*ptr2);


	
	
	
	
	
	
	
	
		
	
	
	
	
	
	
	
	return 0;
}
