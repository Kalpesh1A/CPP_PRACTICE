#include<stdio.h>
int main()
{
	int n;
	printf("\nENter Size of Array=");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter Array Element :");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int idx;
	printf("\nEnter Index to Insert Element =");
	scanf("%d",&idx);
	for( i=idx;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("\nAfter Deletion :");
	for( i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
