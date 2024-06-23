#include<iostream>
using namespace std;

int sum(int fno,int sno)
{
    return fno+sno;
}
int sum(int fno,int sno, int tno)
{
    return fno+sno+tno;
}
/*void sum(int fno ,int sno,int tno)
 {
         cout<<"hi"<<endl;
 }*/
int main()
{
    int fno=10,sno=20,tno=30;
    cout<<"SUM="<<sum(fno,sno)<<endl;
    cout<< sum(fno,sno,tno)<<endl;
    sum(fno,sno,tno);
   


     return 0;
}
//#function overloading : same name with different parameters 
//Note ; return type not take cares only parametres listb should be maintained 