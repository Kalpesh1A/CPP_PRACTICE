#include<iostream>
using namespace std;
class P{
    public :
    int pu=10;
    void m2()
    {
        cout<<pri<<endl;
    }

    private : 
    int  pri=10; 

    protected:

    int pro=10;


};
class C: private P{
    
    public :
    void m1()
    {
        cout<<pu<<endl;
        cout<<pro<<endl;
        //cout<<pri<<endl;-->can not acceesed private mem of p class
        m2();



    }


};
int main()
{
    C c;
    // cout<<c.pu<<endl;
    // cout<<c.pri<<endl;--->Errror: private mem can not access out of class because all mem
    // cout<<c.pro<<endl;   in child class become private
    //How to Access
    c.m1();
   

    




    return 0;
}
/*In this inheritance :
1.private members not inherited
2.public mem become private in child class
3.protected members become private in child class

*/