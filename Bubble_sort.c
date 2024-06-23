#include<stdio.h>
void PrintArray(int *arr,int n)
{
	int i;
	printf("\n");
	for( i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
void BubbleSort(int *arr,int n)
{
	int i,j,temp;
	printf("\n");
	for( i=0;i<n-1;i++)
	{
		printf("\nWorking on Pass:%d",i+1);
		for( j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}	
	}	
	
}
void BubbleSortAdaptive(int *arr,int n)
{
	int i,j,temp,issorted;
	printf("\n");
	for( i=0;i<n-1;i++)
	{	issorted=1;
		printf("\nWorking on Pass:%d",i+1);
		for( j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				issorted=0;
			}
		
		}	
		if(issorted==1)
		{
			return ;
		}
	}	
	
}

int main()
{
	int n,i;
	printf("\nEnter Size of Array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nENTER ARRAY ELEMENT:");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	PrintArray(arr,n);		//print array
	BubbleSort(arr,n);
	PrintArray(arr,n);		//print after bubble sort
	BubbleSortAdaptive(arr,n);
	PrintArray(arr,n);		//print after adaptive bubble sort
	
	
	return 0;
}
