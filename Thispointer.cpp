#include<iostream>
using namespace std;

class Test{
    private:
    int pri=10;
    public:
    int m1(int pri)
    {
            this->pri=pri;
            return this->pri;
       


    }

};
int main()
{
    Test t;
    int num=20;
   cout<<t.m1(num)<<endl;;

    return 0;
}