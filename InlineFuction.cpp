#include<iostream>
using namespace std;
inline int sum(int fno,int sno)
{
    int sum=fno+sno;
    return sum;
}
// Inline fuction replace the fuction at comppiled time it is recommend to use for it small calculations
//if you use it for more complex fuctions then lot of memory will consumed and compile time increase
//do not inline fuctio with static and recursive 


int main()
{

    int fno=3,sno=2;
    cout<<"Sum of fno & sno ="<<sum(fno,sno)<<endl;
    cout<<"Sum of fno & sno ="<<sum(fno,sno)<<endl;



    return 0;
}