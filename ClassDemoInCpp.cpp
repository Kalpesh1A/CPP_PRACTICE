#include<iostream>
using namespace std;
class Test
{
    private:
    int rad;
    void Area(int rad)
    {
          float area;
          area=int(rad*rad*3.14);
          cout<<"AREA="<<area<<endl;  
    }
    public :
    void Areap()
    {
        cin>>rad;
        Area(rad);
    }
    

};
int main()
{
    Test t;
    cout<<"Enter radius of Circle ="<<endl;
    t.Areap();
    


    return 0;

}
