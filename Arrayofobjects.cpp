#include<iostream>
using namespace std;
class Employ 
{
    int id;
    int salary;
    public:
    void setdata()
    {
            salary=10000;
            cout<<"Enter emplo id  ="<<endl;
            cin>>id;
    }
    void getdata() 
    {
        cout<<"Employ id ="<<id<<endl;


    }

};

int main()
{
    // Employ ram,sham;
    // ram.setdata();
    // ram.getdata();
    // sham.setdata();
    // sham.getdata();
    //not good if employ numbers are high ex.100
    //Insted of this arrays of objects like
    Employ facebook[5];
    for(int i=0;i<5;i++)
    {
        facebook[i].setdata();
        facebook[i].getdata();

    }
   

    

    return 0;
}