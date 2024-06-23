#include<iostream>
#include<queue>//first in first out
using namespace std;
//front backk show
//push pop
int main()
{
    queue<string> q;
    q.push("kalpesh");
    q.push("mahadu");
    q.push("patil");

    cout<<"front="<<q.front()<<endl;
    cout<<"Back="<<q.back()<<endl;

    cout<<"After pop:"<<endl;
    q.pop();
    cout<<"front="<<q.front()<<endl;
    cout<<"Back="<<q.back()<<endl;
    
    


    return 0;
}