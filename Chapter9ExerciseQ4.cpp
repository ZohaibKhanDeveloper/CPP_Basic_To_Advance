#include<iostream>
#include<string.h>
using namespace std;
	class Employee{
		private:
			string name; int id;
		public:
			Employee(){
				cout<<"Enter the name of Employee : "; getline(cin,name);
				cout<<"Now Enter ID number : "; cin>>id;
			}
			void printData(){
				cout<<"Employee Name : \""<<name<<"\"";
				cout<<"\nID Number : \""<<id<<"\"";
			}
	};
	class Allowance:public Employee{
		private:
			float bs,gs,ns,hra,da,pf;
		public:
			void TakeBS(){ cout<<"Enter Your Basic Salary : "; cin>>bs; }
			void prepare_payroll(){
				//Finding House_Rent_Allowance, Dearness_Allowance, & Provident_Fund.
				hra=bs*5.00/100.00; da=bs*18.00/100.00; pf=bs*12.00/100.00;
				//Finding Gross_Salary & Net_Salary
				gs=bs+hra+da; ns=gs-pf;
			}
			void print_details(){
				printData();
				cout<<"\nYour payroll detail on the basis of your Salary : "<<bs;
				cout<<"\nHouse Rent Allowanace : "<<hra;
				cout<<"\nDearness Allowance : "<<da;
				cout<<"\nProvident Fund : "<<pf;
				cout<<"\nYour Gross Salary : "<<gs;
				cout<<"\nYour Net Salary : "<<ns;
			}
	};
int main(){
	cout<<"Program that prepare the payroll of an Employee.\n";
	cout<<"-------------------------------------------------\n";
	Allowance emp;
	emp.TakeBS();
	emp.prepare_payroll();
	emp.print_details();
	return 0;
}
