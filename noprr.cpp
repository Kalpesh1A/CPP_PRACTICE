
#include<iostream>
using namespace std;
boolean isprime(int n)
{
	int j=1;
   	int count=0;
   		while(j<=n)
   		{
   			if(n%j==0)
   			{
   				count=count+1;
						
			}
   				j=j+1;
		}
		if(count==2)
		{
			return true;
		}
		return false;
}
int main()
{
   	
   int  n,i,nop=0;
   cout<<"\nEnter Number of Elements =";
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {	
   		cin>>arr[i];
   	
   }
    for(i=0;i<n;i++)
   {	
   		if(isprime(arr[i]))
   		{
   			nop++;
		}
   }
   	cout<<"\n Number of primes="<<nop;
   
	
	return 0;
}
