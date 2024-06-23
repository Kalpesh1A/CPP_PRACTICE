#include<iostream>
using namespace std;
int  sum(int fno , int sno)
{

    return fno+sno; 
}
void sumprinted(int fno,int sno)
{
    cout<<"The sum printed"<<endl;
    cout<<"sum"<<fno+sno<<endl;
}
int main()
{
    int fno=10,sno=20;
    cout<<"sum="<<sum(fno,sno)<<endl;
    sumprinted(fno,sno);






    return 0;
}