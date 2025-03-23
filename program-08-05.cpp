#include<iostream>
#include<stdio.h>
using namespace std;
	class student_Detail{
		private:
			int subM[3],total; char name[20]; float avg;
		public:
			void TakeRec(){
				cout<<"Enter the name of the student : "; gets(name);
				for(int i=0; i<3; i++){
					cout<<"Enter subject "<<i+1<<" marks : ";
					cin>>subM[i];
					total+=subM[i];
				}
				avg=total/3;
			}
			void PrintRec(){
				cout<<"Student Name : "<<name;
				for(int i=0; i<3; i++){
					cout<<"\nSubject "<<i+1<<" marks : ";
					cout<<subM[i];
				}
				cout<<"\nTotal Marks of student : "<<total<<"/300";
				cout<<"\nAverage Marks of the student : "<<avg;
			}
	};
	int main(){
		cout<<"Simple Class program that take and print detail of a student.\n";
		student_Detail student;
		student.TakeRec();
		student.PrintRec();
		return 0;
	}
