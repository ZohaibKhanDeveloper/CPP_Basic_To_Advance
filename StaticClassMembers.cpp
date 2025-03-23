#include<iostream>
#include<stdio.h>
using namespace std;
	class student{
		private:
			static int roll_no;
			char name[20];
		public:
			void setName(){
				cout<<"Enter Student name: "; gets(name);
			}
			void getName(){
				cout<<"\""<<name<<"\"";
				roll_no++;
			}
			int getRollNo(){
				return roll_no;
			}
	};
	int student::roll_no;
	int main(){
		student sts[5];
		cout<<"Simple Class Program that use static Data member Roll No for student.\n";
		cout<<"---------------------------------------------------------------------\n";
		for(int i=0; i<5; i++) sts[i].setName();
		for(int i=0; i<5; i++){ 
		sts[i].getName();
		cout<<" Roll no is "<<sts[i].getRollNo()<<endl;
		}
		return 0;
	}
