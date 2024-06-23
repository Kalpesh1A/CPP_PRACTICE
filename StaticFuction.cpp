#include<iostream>
//#include"WithoutStaticVariable.cpp"
using  namespace  std;

class Employ
{
    static int count;
    int id;
   
    public :
    
    void setdata()
    {
            cout<<"Enter Emplo id="<<endl;
            cin>>id;
            count++;

    }
    void getdata()
    {
        cout<<"Employ id ="<<id<<"\n Employ Num="<<count<<endl;

    }
   static  void  getcount()
    {
        cout<<"count="<<count<<endl;
        //With the help of static fuction we can access only static members
        //cout<<"Id ="<<id<<endl;---> throws error
    }

};
int Employ::count=0;
//note we do not need to initialize static variable automatic it is 0 if we have to iniatilize then
// initialize here



int main()
{
    Employ ram;
    ram.setdata();
    ram.getdata();
    ram.getcount();

    Employ sham;
    sham.setdata();
    sham.getdata();
    //sham.getcount();  OR
    Employ::getcount();
    // without taking object we can accesss static function with help of class name


    return  0;
}
