#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"Constructor A called"<<endl;
    }
};
class B{
    public:

     B()
    {
        cout<<"Constructor B called"<<endl;
    }
};
class C:public A,public B{
    public :
     C()
    {
        cout<<"Constructor C called"<<endl;
    }

};
int main()
{

C c;


    return 0;
}