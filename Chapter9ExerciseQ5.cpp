#include<iostream>
using namespace std;
	class Employee{
		protected:
			string name; int id;
		public:	
			Employee(){
				cout<<"Enter Employee Name : "; getline(cin,name);
				cout<<"Enter Employee ID : "; cin>>id;
			}
			void ShowNameId(){
				cout<<"Employee Name : \""<<name<<"\"\n";
				cout<<"Employee ID : \""<<id<<"\"\n";
			}
	};
	class Allowance{
		private:
			float bs,gs,ns,hra,da,pf;
		public:
			Allowance(){
				cout<<"Enter Your Basic Salary : "; cin>>bs;
				//Finding House_Rent_Allowance, Dearness_Allowance, & Provident_Fund.
				hra=bs*5.00/100.00; da=bs*18.00/100.00; pf=bs*12.00/100.00;
				//Finding Gross_Salary & Net_Salary
				gs=bs+hra+da; ns=gs-pf;
			}
			void print_NetPay_GrossPay(){
				cout<<"Your payroll detail on the basis of your Salary : "<<bs;
				cout<<"\nHouse Rent Allowanace : "<<hra;
				cout<<"\nDearness Allowance : "<<da;
				cout<<"\nProvident Fund : "<<pf;
				cout<<"\nYour Gross Salary : "<<gs;
				cout<<"\nYour Net Salary : "<<ns;
			}
	};
	class EmployeeDetail:public Employee,public Allowance{
		public:
			void ShowFullDetail(){
				ShowNameId();
				print_NetPay_GrossPay();
			}
	};
int main(){
	cout<<"Multiple Inheritance Program that prepare the payroll of an Employee.\n";
	cout<<"--------------------------------------------------------------------\n";
	EmployeeDetail emp;
	emp.ShowFullDetail();
	return 0;
}
