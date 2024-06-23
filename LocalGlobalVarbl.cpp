#include<iostream>
using namespace std;
int i=10,j=10;   //global variablei
void sum()
{
    cout<<i<<endl;
}
int main()
{

    int i=11;           //local more privority than global
    cout<<i<<endl;
    cout<<j<<endl;
    sum();


    return 0;
}