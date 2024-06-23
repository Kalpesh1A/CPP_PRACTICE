#include<iostream>
#include<deque>
using namespace std;
// we perform pushback and popback  in vector but in deque
// we can perform pushfront,popfront
int main()
{
    deque<int> d;
    cout<<"After Push back:"<<endl;
    d.push_back(1);
    d.push_back(2);
    for(int i:d)
    {
        cout<<i<<"-";
    }
    cout<<endl;

    d.push_front(3);
    cout<<"After Usinng push front"<<endl;
    for(int i:d)
    {
        cout<<i<<"-";
    }
    cout<<endl;

    cout<<"After Using popback"<<endl;
    d.pop_back();
     for(int i:d)
    {
        cout<<i<<"-";
    }
    cout<<endl;

    cout<<"After Using pop front"<<endl;
    d.pop_front();
     for(int i:d)
    {
        cout<<i<<"-";
    }
    cout<<endl;

    cout<<"Is empty :"<<d.empty()<<endl;
    cout<<"Element at index 0="<<d.at(0)<<endl;
    




    


    return  0;
}