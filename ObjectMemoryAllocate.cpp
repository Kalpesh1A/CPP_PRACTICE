#include<iostream>
using namespace std;
class Shop
{
    int id[100];
    int price[100];
    int count;
    public :
    void setprice();
    void diplayprice();
    void initcounter()
    {
        count=0;
    }

    


};
void Shop:: setprice()
{
    cout<<"Enter Item id="<<endl;
    cin>>id[count];
    cout<<"Enter price of your Item="<<endl;
    cin>>price[count];
    count++;

}
//without using for loop we take input
void Shop::diplayprice()
{
    for(int i=0;i<count;i++)
    {
        cout<<"The Atom id of"<<id[i]<<"with price"<<price[i]<<endl;
    }
}
int main()
{
    Shop s;
    s.initcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.setprice();
    s.diplayprice();





    return 0;
}