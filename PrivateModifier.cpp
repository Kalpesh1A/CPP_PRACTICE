#include<iostream>
using namespace std;
class Test
{
    //Note: if we do not specify access modifier then by default it is consider as private.
    private :
    float pi=3.14;
    public :
    int area(int rad)
    {
       return pi*rad*rad;
    }
};



int main()
{
    Test t;
    //t.radius=10;---->cmpile time error
    int rad=5;
    cout<< t.area(rad);

    return 0;
}