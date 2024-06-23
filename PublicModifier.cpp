#include<iostream>
using namespace std;
class Test
{
    public : 
    int rad;
    void area(int rad)
    {
            rad=rad*1;
            cout<<"Area of Circle ="<<3*rad*rad<<endl;
    }
};
int main()
{
    Test t;
    cout<<"Enter Radius ="<<endl;
    cin>>t.rad;
    t.area(t.rad);
    


    return 0;
}