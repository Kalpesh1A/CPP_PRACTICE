#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;
    public:
    void printdata()
    {
        cout<<a<<" + "<<"i"<<b<<endl;
    }
    Test()
    {
        a=0;
        b=0;

    }
    Test(int fno)
    {
        a=fno;
        b=0;


    }
    Test(int fno,int sno)
    {
        a=fno;
        b=sno;


    }

};
int main()
{
    Test t1;
     t1.printdata();
    Test t2(10);
    t2.printdata();
    Test t3(10,20);
    t3.printdata();






    return 0;
}