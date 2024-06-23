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

};
int Employ::count=1000;
//note we do not need to initialize static variable if we have to iniatilize then
// initialize here



int main()
{
    Employ ram;
    ram.setdata();
    ram.getdata();
    Employ sham;
    sham.setdata();
    sham.getdata();


    return  0;
}
