#include<iostream>
#include<stack>//Last In first Out
using namespace std;
//push pop top
int main()
{
    stack<string> s;
    s.push("kalpesh");
    s.push("Mahadu");
    s.push("patil");

    cout<<"Top Element ="<<s.top()<<endl;
    cout<<"After Pop:"<<endl;

    s.pop();
    
    cout<<"Top Element ="<<s.top()<<endl;
    
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;







    return 0;

}