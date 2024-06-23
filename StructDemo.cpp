#include<iostream>
using namespace std;
struct employ {
    int id ;
    int salary;
};
int main()
{

    struct  employ ram;
    ram.id=1;
    ram.salary=120595;
    cout<<ram.salary<<endl;
    cout<<ram.id<<endl;

    


    return 0;
}