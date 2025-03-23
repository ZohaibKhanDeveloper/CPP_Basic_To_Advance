#include<iostream>
using namespace std;
	class obj_args{
		private:
			int n1,n2,product;
		public:
			void get_values(){
				cout<<"Enter 1st Number : "; cin>>n1;
				cout<<"Enter 2nd Number : "; cin>>n2;
				product=n1*n2;
			}
			void print_product(obj_args obj){
				cout<<"The Product of two numbers is : "<<obj.product;
			}
	};
	int main(){
		cout<<"-------------Simple class program-------------\n";
		cout<<"Member Function that take object as arguments.\n";
		cout<<"-----------------------------------------------\n";
		obj_args obj1,obj2;
		obj1.get_values();
		obj2.print_product(obj1);
		return 0;
	}
