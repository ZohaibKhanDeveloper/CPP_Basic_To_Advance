#include<iostream>
#include<stdio.h>
using namespace std;
	class student{
		private:
			char name[20];
			int rollNo;
		public:
			void setValues(){
				cout<<"Enter Your Name : "; gets(name);
				cout<<"Enter Your Roll No : "; cin>>rollNo;
			}
			void getName(){
				 cout<<name;
			}
			int getRollNo(){
				return rollNo;
			}
	};
	int main(){
		student st;
		cout<<"Simple Class Program that take name and Roll no of a student.\n";
		cout<<"-------------------------------------------------------------\n";
		st.setValues();
		st.getName();
		cout<<" Roll No is "<<st.getRollNo();
		return 0;
	}
