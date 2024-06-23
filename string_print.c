#include<stdio.h>
void printstring(char name[])
{
	int i;
	for( i=0;name[i]!='/0';i++)
	{
		printf("%c",name[i]);
	}
}
int main()
{
	char name[10]="kalpesh";
	printstring(name);
	
	
	
	
	return 0;
}
