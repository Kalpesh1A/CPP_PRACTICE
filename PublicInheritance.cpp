#include<iostream>
using namespace std;
class P
{
    private: 
    int x=10;
    public :
    int y=10;
    void m2()
    {
        cout<<x<<endl;
    }
    protected:
    int z=10;
};
class C : public P
{
    public :
    void m1()
    {
        cout<<z<<endl;

    } 

};

int main()
{
    C c;
   // cout<<c.x<<endl;-->error private mem
    cout<<c.y<<endl;
    //cout<<c.z<<endl;-->error protected= private but only accessed/used in child class
    c.m1(); 
    c.m2();







    return 0;
}
//In this  inheritance :
/*
1.private members not Private members are not inherited
2.publiic mem become public in child class
3.protected members become protected in child class*/