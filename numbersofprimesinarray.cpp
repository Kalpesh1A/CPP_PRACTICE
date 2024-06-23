#include<iostream>
using namespace std;
int main()
{
   	

   int  n,i,count=0,j=1,nop=0;
   cout<<"\nEnter Number of Elements =";
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {	
   		cin>>arr[i];
   	
   }
    for(i=0;i<n;i++)
   {	
   		j=1;
   		count=0;
   		while(j<=arr[i])
   		{
   			if(arr[i]%j==0)
   			{
   				count=count+1;
						
			}
   				j=j+1;
		}
		if(count==2)
		{
			nop=nop+1;
		}
   }
   	cout<<"\n Number of primes="<<nop;
   
	
	return 0;
}
