#include<iostream>
using namespace std;
int main()
{
    int marks[5]={10,20,30,40,50};
    int *ptr=marks; ///== ptr=&marks[0];
   
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    //cout<<*(ptr++)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<""<<endl;
    //          0 1 2 3 4 
    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];
    p=p+3;//4
    cout<<*p<<endl;



    return 0;
}