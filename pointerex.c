#include<stdio.h>
int main()
{
	int i=9;
	int *ptr;
	ptr=&i;
	printf("\n ADD=%u",ptr);
	printf("\n value=%d",*ptr);
	ptr++;
	printf("\n ADD=%u",ptr);
	printf("\n value=%d",*ptr);
	
	// 64
	//2000	2001
	// ptr
	
	return 0;
}
