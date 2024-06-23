#include<iostream>
using namespace std;
class Test{
public:
void m1(int x)
{
    cout<<x<<endl;
}
void m1(int x,int y)
{
    cout<<x+y<<endl;
}
};

int main()
{

Test t;
t.m1(10);
t.m1(10,20);

    return 0;
}
/*Polymorphism: Same Thing Has Many Forms
1.Compile time:(Early binding)
        1.Fuction Overloading
        2.Operator Overloading
2.Runtime :(Dynamic or late binding)
        //Virtual fuction are dynamic fuction in cpp


*/
