
//abstraction:
//			considering imp things ignoring the rest.
//			
//encapsulation: the wrapping of data and binding into single unit is called encapsulation
//				to achieve user freindliness and security
//				capsule.
//				
//
//inheritance :
//	acquiring properties of someone else by his permission
//	to achieve reusability
//	
//							
//	
//polymorphism :
//		same thing has many forms 
//		
//		1. overloading
//		      function , operator , construtor 
//		2. overriding 
//		
//		
//		OVERLOADING:  
//		function :
//			same  name with different parameter list and different return type
//		
//		OVERRIDING:
//			same  name with same parameter list and same return type
//			
//			
//===========================================================================================================================
//
//
//			vehicle 	 100 method  
//			   |
//			 Car 	      50 method 
//			 			  100 inherited copies
//				|
//				
//				BMW        150-25  inheited copies
//							25      overrided copies
//			
//	===========================================================
#include<iostream>
using namespace std;
	class student
	{
		private:
			int accno;
			
			void perform()
			{
				cout<<"it is private function";
			}
			
		protected :
			int adharid;
			void protect()
			{
				cout<<"it is protected function";
			}
		public:
		int roll,mark;
		float height;
		void pub()
		{
			cout<<"it is public function";
		}
		
	};
	
	
	
	int main()
	{
		student s1,s2;
		s1.roll=1;
		s1.mark=90;
		s1.height=70.50;
//		cout<<"Roll No of First Strudent :"<<s1.roll;
//		cout<<"\nMarks of First Student :"<<s1.mark;
//		cout<<"\nHeight of First tudent :"<<s1.height;
		
		//s1.protect();
	//	s1.perform();
	
		s1.pub();
		B b1;
		
		b1.pub();
		return 0;
		
	}
			


	
//	inheritance 
//		 single        
//		 multilevel  
//		 multiple          
//		 hierarchical  
//		 hybrid
//		 
//		 
//		 
//		 
//		 class A  
//		 private : 50
//		 protected : 30
//		 public : 40
//		 
//		 class B : public A
//		 private : 15  
//		 protected : 5 + 30
//		 public : 35 + 40
//		 
//		 class C : private B 
//		 private : 60 +  35 + 75
//		 protected: 10
//		 public:  20 
//
//         class D : protected c
//         private :   
//         protected :  30
//         public :

















		
