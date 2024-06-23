#include<stdio.h>
int  len(char str[])
{	int count=0;
	int i;
	for(i=0;i!='\0';i++)
	{
		count = count + 1;
	}
	return count;
}
int main()
{	
	//for calculate length of string
	char  str[100],i;
	printf("\nEnter Your String :");
	fgets(str,100,stdin);
	int count;
	count=len(str);
	printf("\nLength of string =%d",count);

	
	return 0;
}
