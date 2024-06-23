#include<iostream>
using namespace std;
int glo=10;
int main()
{
    int glo=20;
    cout<<"glo="<<glo<<endl;
    cout<<"glo="<<::glo<<endl;

    


    return 0;
}