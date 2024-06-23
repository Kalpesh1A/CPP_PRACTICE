#include<iostream>
using namespace std;
void callbyv(int fno , int sno)
{
    int temp;
    temp=fno;
    fno=sno;
    sno=temp;
}
void callbyr(int *fno , int *sno)
{
    int temp;
    temp=*fno;
   *fno=*sno;
   *sno=temp;




}
int main()
{
    int fno=10;
    int sno=20;
    callbyv(fno,sno);
    cout<<"Using call by value\n"<<"fno="<<fno<<"\nsno="<<sno<<endl;
    callbyr(&fno,&sno);

    cout<<"Using call by ref\n"<<"fno="<<fno<<"\nsno="<<sno<<endl;

    return 0;
}