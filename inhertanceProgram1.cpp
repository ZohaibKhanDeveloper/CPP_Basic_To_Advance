#include<iostream> 
using namespace std;
	class student{
		private:
			char name[20],program[10];
		public:
			void setData(){
				cout<<"Enter Your Name : "; cin>>name;
				cout<<"What is Your Program : "; cin>>program;
			}
			void show(){
				cout<<"Name of the student : "<<name;
				cout<<"\nProgram : "<<program;
			}
	};
	class marks:public student{
		private:
			int marks[6],total=0,avg;
		public:
			void inputMarks(){
				for(int i=0; i<6; i++){
					cout<<"Enter Subject "<<i+1<<" Marks : "; cin>>marks[i];
					total+=marks[i];
				}
				avg=total/6;
			}
			void showMarks(){
				show();
				cout<<"\nTotal Marks : "<<total;
				cout<<"\nAverage Marks : "<<avg;
			}
	};
	int main(){
		marks ofSt1,ofSt2;// ofSt1: Details of student 1 ofSt2: Details of student 2
		cout<<"Simple Class Program that use a Child or Derived Class.\n";
		cout<<"\t~(Setting Student 1 Data)~\n";
		ofSt1.setData();
		ofSt1.inputMarks();
		cout<<"\t~(Setting Student 2 Data)~\n";
		ofSt2.setData();
		ofSt2.inputMarks();
		cout<<"\t~(Printing Student 1 Data)~\n";
		ofSt1.showMarks();
		cout<<"\n\t~(Printing Student 2 Data)~\n";
		ofSt2.showMarks();
		return 0;
	}
