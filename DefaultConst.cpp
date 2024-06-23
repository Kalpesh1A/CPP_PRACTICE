#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;
    public :
    void printdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Test(int x,int y=0)
    {
        a=x;
        b=y;
    }

};


int main()
{
    Test t(10,20);
    t.printdata();
    Test t2(10);
    t2.printdata();
    



    return 0;
}