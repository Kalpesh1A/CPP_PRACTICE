#include<iostream>
using namespace std;
class P{
    public :
    int pu=10;
    void m3()
    {
        cout<<pri<<endl;
    }

    private:
    int pri=20;


    protected:
    int pro=30;
  


};
class C: protected P{
    public :
    void m1()
    {
        cout<<pu<<endl;
        cout<<pro<<endl;
        m3();
        
    }

};
// class D : public C{
//     public:
//     void m2()
//     {
//         cout<<pro<<endl;

//     }

// };
int main()
{
    C c;
    c.m1();
    return 0;
}
/*In this Inheritance 
1.Private mem can not accessed of parent class
2.Public mem become protected in child class
3.protected mem become protected in child class
*/