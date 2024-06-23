#include<iostream>
using namespace std;
class P
{
    public :
    int x=10;

};
class C:P
{
   public:
    void m1()
    {
        cout<<x<<endl;
    }

};



int main()
{
    C c;
    c.m1();


    return 0;
}
//Single level: 1p-->1c
//Multilevel:   1p-->1c-->1c
//Multiple: 2p-->1c
//Hierrachical:1p-->2c
//Hybrid:multiple+multilevel ex.1p-->2child-->1c
/*Private members are accessible only within the class in which they are declared. 
So even if you inherit the class, you will have access only to the public and
 protected members of the base class but private members are not inherited(accessible)*/


 /*
    B      C
    \    /
     \  /
      A
       \
        \
         D Hybrid

    A-->diamond
  / \
 B   C
  \ /
   D


 
 */