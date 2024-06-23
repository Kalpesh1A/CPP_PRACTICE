#include<iostream>
using namespace std;
int rec(int num)
{
    
   
   if(num<=1)
   {
     return 1;
   }
    else
         return num * rec(num-1);
   
    
}
int main()
{
    int num=4;
    cout<<"Factorial="<< rec(num)<<endl;


    return 0;
}