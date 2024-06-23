#include<iostream>
using namespace std;
class Test
{ 
    int a;
    int b;
    public :
    void point()
    {
        cout<<"The Point is ="<<"("<<a<<","<<b<<")"<<endl;
    }
    Test(int x,int y)
    {
            a=x;
            b=y;
    }


};
int main()
{
    Test p1(10,20);
    p1.point();
    Test p2(20,30);
    p2.point();
    





    return 0;
}