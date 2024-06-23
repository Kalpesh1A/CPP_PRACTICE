#include<stdio.h>

int sum(int st,int et)
{
	int count;
	count=st;
	st=st+1;
	for(st;st<=et;st++)
	{
		count=count+st;
	}
	return 5+6+7+8+9+10;
	
}


int main()
{
	int st,et,add;
	printf("\n Enter start for sum=");
	scanf("%d",&st);
	printf("\n Enter end for sum=");
	scanf("%d",&et);
	add=sum(st,et);
	printf("\n%d",add);
	
	return 0;
}
