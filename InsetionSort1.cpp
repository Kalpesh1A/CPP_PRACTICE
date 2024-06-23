#include<stdio.h>
//void PrintArray(int *arr,int n)
//{
//	int i;
//	for( i=0;i<n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void InsertionSort(int *arr,int n)
//{
//	int i,j,key;
//	for( i=1;i<n;i++)
//	{
//	  key=arr[i];
//	  j=i-1;
//	  while( j>=0 && key<arr[j]) 
//	  {
//	  	arr[j+1]=arr[j];
//	  	j--;
//	  }
//	  arr[j+1]=key;
//	}
//	
//}

int main()
{
	int n,i;
	printf("\nEnter Size :");
	scanf("%d",&n);
	int arr[n];
	printf("\nENTER ARRAY ELEMENT :");
	for( i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	PrintArray(arr,n);
	InsertionSort(arr,n);
	PrintArray(arr,n);

	return 0;
}

#include<iostream>
using namespace std ;
void print_array(int *arr,int n)
{
   
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void insert_array(int *arr,int n)
{       
        int key,j;
        for(int i=1;i<n;i++)     //For the number of passes
        {
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key)   //for shifting & after loop stored value 
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;

        }
}
int main()
{
    int n;
    cout<<"\nEnter Array Size=";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print_array(arr,n);
    insert_array(arr,n);
    print_array(arr,n);


    return 0;
}
