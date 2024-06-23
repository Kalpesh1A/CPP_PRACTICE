#include<iostream>
using namespace std;
int sum(int fno,int sno)
{
    static  int  tno=0;
    tno=tno+1;
    return fno+sno+tno;
    //Static inialixe only once if we cacll fuction again again it not initialize again and again

}
int main()
{ 
    int fno=2,sno=3;
    cout<<"The Sum="<<sum(fno,sno)<<endl;
    cout<<"The Sum="<<sum(fno,sno)<<endl;
    cout<<"The Sum="<<sum(fno,sno)<<endl;
    cout<<"The Sum="<<sum(fno,sno)<<endl;

    return 0;
}