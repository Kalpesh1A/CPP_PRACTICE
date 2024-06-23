#include<stdio.h>
void ss(int *arr[],int n)
{
	int min,j,temp;
	for( i=0;i<n-1;i++)
	{
		min=i;
		for( j=i+1;j<n;j++)
		{
			if(arr[min]>arr[i])
			{
				min=i;
			}
			
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		
	}
}
void print(int *arr[],int n)
{
	

	for( i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
	
	
int main()
{
	int n,i;
	printf("\nEnter Size:");
	scanf("%d",&n);
	int arr[n];

	printf("\nEnter Array Element :");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//printf("\nAfter :");
	print(arr,n);
	ss(arr,n);

	
	return 0;
}
