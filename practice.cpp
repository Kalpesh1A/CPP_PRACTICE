#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"\nEnter Size of Array";
	cin>>n;
	int arr[n];
	cout<<"\nEnter Array Elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int idx,element;
	cout<<"\nEnter index to insert Element:";
	cin>>idx;
	cout<<"\nEnter Element:";
	cin>>element;
	cout<<"\nBefore insertion";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<arr[i];
	}	

	cout<<"\nAfteer insertion";
	for(i=n-1;i>=idx;i--)
	{
		arr[i+1]=arr[i];
	}
	n=n+1;
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<arr[i];
	}
	
	return 0;
}





