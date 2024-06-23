#include<iostream>
using namespace std;
int main()
{
	int num=475;
	int sum=0;
	int rev;
	int j;
	while(num>0)
	{
		j=num%10;
		sum=(sum*10)+j;
		num=num/10;
	}
	cout<<"REV="<<sum<<endl;
	
	return 0;
}

