/*
constructor :
1.used to initialize objcet & its name is same as class name
2.It call automatically when object is created 
3.It should be declared in public section
4.It can have default args
5.we can not refert to their address


*/
#include<iostream>
using namespace std;
class Complex
{
    int a;
    int b;
    public :
    void printdata()
    {
        cout<<"Complex No= "<<a<<" + "<<"i "<<b<<endl;


    }

    Complex()
    {
            a=10;
            b=20;
    }
    
    
    
};
//Complex::
// Complex()
// {

// }

int main()
{
    Complex c;
    c.printdata();
    Complex c1;
    c1.printdata();



    return 0;
}