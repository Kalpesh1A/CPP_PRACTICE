#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int(10);
    //delete ptr;--->gives garbage value
    cout<<"The Value at Address ="<<*ptr<<endl;
    delete ptr;

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"The Value at idx 0="<<(arr[0])<<endl;
    delete[] arr;





    return 0;
}