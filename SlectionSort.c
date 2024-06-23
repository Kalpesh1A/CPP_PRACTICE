#include<stdio.h>
void PrintArray(int *arr,int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++ )
	{
		printf("%d ",arr[i]);
	}
	
	
}
void SelectionSort(int *arr,int n)
{
	int i,j,temp,max;
	printf("\n");
	for(  i=0;i<n-1;i++)
	{
		printf("\nWorking on pass:%d",i+1);
		max=i;
		for( j=i+1;j<n;j++)
		{
			if(arr[max]>arr[j])
			{
				max=j;
			}
		}
		temp=arr[i];
		arr[i]=narr[max];
		arr[max]=temp;
	}
	
}
int main()
{
	int n,i;
	printf("\nEnter Size of Array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter Array Element :");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	PrintArray(arr,n);
	SelectionSort(arr,n);
	PrintArray(arr,n);	
	
	
	
	return 0;
}
