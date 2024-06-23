#include<iostream>
using namespace std;
class Complex
{
    int a;
    int b;
    public:
    void setdata(int v1,int v2)
    {
            a=v1;
            b=v2;

    }
    void printdata()
    {
        cout<<"The Complex Number = "<<a<<" + "<<b<<"i"<<endl;

    }
    void setsum(Complex o1 , Complex o2)
    {
        a=o1.a + o2.a;
        b=o1.b + o2.b;



    }

};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(2,3);
    c1.printdata();
    c2.setdata(4,5);
    c1.printdata();

    c3.setsum(c1,c2);
    c3.printdata();

    



return 0;

}