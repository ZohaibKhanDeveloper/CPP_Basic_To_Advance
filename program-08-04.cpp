#include<iostream>
#include<stdio.h>
using namespace std;
	class emp{
		private:
			char name[20];
			int bpay,h_rent,ma,gpay;
		public:
			void inp_employee(){
				cout<<"Enter the name of the Employee : "; gets(name);
				cout<<"Enter basic pay of Employee : "; cin>>bpay;
			}
			void calculate(){
				h_rent=bpay*60/100;
				ma=bpay*20/100;
				gpay=h_rent+ma+bpay;
			}
			void print_details(){
				cout<<"Name : "<<name;
				cout<<"\nBasic Pay : "<<bpay;
				cout<<"\nHouse Rent : "<<h_rent;
				cout<<"\nMedical allowance : "<<ma;
				cout<<"\nNet Pay : "<<gpay;
			}
	};
	int main(){
		cout<<"Class program that calculate and print the details of an employee.\n";
		emp employee;
		employee.inp_employee();
		employee.calculate();
		employee.print_details();
		return 0;
	}
