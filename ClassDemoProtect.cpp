#include<iostream>
using namespace std;
class Parent
{
    protected:
    int rad;
    void area(int rad)
    {
            cout<<"AREA="<<3*rad*rad<<endl;
    }

};
class Child:Parent{
   
   public:
   void Input()
   {
    cin>>rad;
    area(rad);

   }


};
int main()
{
 
    Child c;
    cout<<"Enter Radii="<<endl;
    c.Input();



    
    return 0;
}
