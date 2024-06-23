#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int *ptr1,**ptr2;
    ptr1=&num;
    ptr2=&ptr1;

    cout<<"Address of num="<<&num<<endl;
    cout<<"Address of num using ptr1="<<ptr1<<endl;
    cout<<"Address of ptr1 using ptr2="<<ptr2<<endl;
    cout<<"Address of num using ptr2= "<<*ptr2<<endl;

    cout<<"Value of num="<<num;
    cout<<"Value of num using ptr1="<<*ptr1<<endl;
    cout<<"Value of num using ptr2="<<**ptr2<<endl;
    


    return 0;
}