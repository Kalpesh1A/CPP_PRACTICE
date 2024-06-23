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
	int element;
	printf("\nEnter Element To Insert At Index=");
	scanf("%d",&element);
	for(i=n;i>=idx;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[idx]=element;
	printf("\nAfter Insertion:");
	for( i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
