#include<iostream>
using namespace std;
class Student
{
	public:
		int roll_no,marks,seat_no;
		float fees;
		string name[100];
	
		
		
		
};


int main()
{
	
	Student s1,s2;
	
	

	
	
	cout<<"\nEnter Roll Number :";
	cin>>s1.roll_no;
	cout<<"\nEnter marks:";
	cin>>s1.marks;
	cout<<"\nEnter seat  Number:";
	cin>>s1.seat_no;
	cout<<"\nEnter Fees";
	cin>>s1.fees;

	
	cout<<"\nThe Data Of The Student:";
	cout<<"\nName:\t"<< s1.name;
	cout<<"\nRollNO:\t"<<s1.roll_no;
	cout<<"\nMarks:\t"<<s1.marks;
	cout<<"\nSeatNumber:\t"<<s1.seat_no;
	cout<<"\nFees:\t"<<s1.fees;
	




	
	
	return 0;
}
