#include<iostream>
using namespace std;
int sum(int num,float fact=1.5)
{
    return num*fact;
}
int main()
{
    cout<<sum(10)<<endl;
    cout<<sum(10,1.6);



    return 0;
}