#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    maxi.push(10);
    maxi.push(20);
    maxi.push(40);
    maxi.push(30);
    int n=maxi.size();
    cout<<maxi.pop()<<endl;





    return  0;
}