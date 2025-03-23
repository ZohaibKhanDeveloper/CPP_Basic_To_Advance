#include<iostream>
using namespace std;
//Protected Members are private outside but public for child class.
	class parent{
		protected:
			int num1,num2,sum;
		public:
			void printSum(){
				sum=num1+num2;
				cout<<"Sum of Numbers is : "<<sum;
			}
	};
	class child:public parent{
		public:
			void setNumbers(){
				cout<<"Enter First Number : "; cin>>num1;
				cout<<"Now Enter Second Number : "; cin>>num2;
			}
	};
	int main(){
		child obj1;
		cout<<"\t~*~(Public Class Inheritance Program.)~*~\n";
		obj1.setNumbers();
		obj1.printSum();
		return 0;
	}
