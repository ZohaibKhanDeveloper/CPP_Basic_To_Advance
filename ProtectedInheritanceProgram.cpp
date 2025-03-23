#include<iostream>
using namespace std;
//Protected Members are private outside but public for child class.
	class parent{
		protected:
			int num1,num2,sum;
		public: 
		/* Only protected members are accessable in private Inheritance. */
			void printSumParent(){
				sum=num1+num2;
				cout<<"Sum of Numbers is : "<<sum;
			}
	};
	class child:protected parent{
		public:
			void setNumbers(){
				cout<<"Enter First Number : "; cin>>num1;
				cout<<"Now Enter Second Number : "; cin>>num2;
			}
			void printSumChild(){
				sum=num1+num2;
				cout<<"Sum of Numbers is : "<<sum;
			}
	};
	int main(){
		child obj1;
		cout<<"\t~*~(Protected Class Inheritance Program.)~*~\n";
		obj1.setNumbers();
		obj1.printSumChild();
		return 0;
	}
