#include<iostream>
using namespace std;
	class Employee{
		protected:
			string name; int id; float salary;
		public: 
			virtual void InputOutput()=0;
	};
	class EmployeeInput:public Employee{
		public:
			void InputOutput(){
				
			}
	};
	class EmployeeOutput:public Employee{
		
	};
int main(){
	return 0;
}
