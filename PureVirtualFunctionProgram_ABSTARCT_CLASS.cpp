#include<iostream>
using namespace std;
	/*This class is general design for both inherited classes Student and Teacher.
	We can't make an object of abstract class.This will be done only using inheritance.
	Pure virtual functions are "DO NOTHING" functions.
	Functionality will be changed in child classes.(pure virtual functions)*/
	class Person{ //Abstarct Class. "Person".
		protected:
			string name,info; int age; 
		public:
			virtual void takeData()=0; //Pure virtual function
			virtual void printData()=0; //Pure virtual function
	};
	class Teacher:public Person{ //Child class
		private:
			float salary; int scale;
		public:
			void takeData(){
				cout<<"\nEnter name : "; getline(cin,name);
				cout<<"\nEnter age : "; cin>>age;
				info="Teacher";
				cout<<"\nEnter Salary : "; cin>>salary;
				cout<<"\nWhat is your scale(18/17/16 etc)? "; cin>>scale;
			} 
			void printData(){
				cout<<"YOUR NAME : "<<name;
				cout<<"\nYOUR AGE : "<<age;
				cout<<"\nYou are a "<<info;
				cout<<"\nYOUR SALARY : "<<salary;
				cout<<"\nYOUR SCALE : "<<scale<<endl;
			} 
	};
	class Student:public Person{ //Child class
		private:
			int marks; string remarks;
		public:
			void takeData(){
				cin.ignore();
				cout<<"\nEnter name : "; getline(cin,name);
				cout<<"\nEnter age : "; cin>>age;
				info="Student.";
				cout<<"\nEnter Marks : "; cin>>marks;
				if(marks>=40) remarks="Passed.";
				else remarks="Failed.";
			} 
			void printData(){
				cout<<"YOUR NAME : "<<name;
				cout<<"\nYOUR AGE : "<<age;
				cout<<"\nYou are a "<<info;
				cout<<"\nYOUR Marks : "<<marks;
				cout<<"\nYou are "<<remarks<<endl;
			} 
	};
int main(){
	Person *p;
	Student stud; Teacher tchr; //stud = student & tchr= Teacher.
	cout<<"<<<<<<<<<<<<<<<~(Abstarct class program)~>>>>>>>>>>>>>>>\n";
	cout<<"---(ENTER TEACHER'S DATA)---";
	p=&tchr; p->takeData();
	cout<<"---(ENTER STUDENT'S DATA)---";
	p=&stud; p->takeData();
	cout<<"---(PRINTING TEACHER'S DETAIL)---\n";
	p=&tchr; p->printData();
	cout<<"---(PRINTING STUDENT'S DETAIL)---\n";
	p=&stud; p->printData();
	return 0;
}
