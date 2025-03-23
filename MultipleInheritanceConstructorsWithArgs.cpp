#include<iostream>
using namespace std;
	class StudentNR{ //Student Name and Roll no class
		private:
			string name; int rollNo;
		public:
			StudentNR(string name,int rollNo){
				this->name=name; this->rollNo=rollNo;
			}
			void show_Name_RollNo(){
				cout<<"\nName of the student is : \""<<name<<"\".";
				cout<<"\nRoll No of the student is : \""<<rollNo<<"\".";
			}
	};
	class StudentMT{ //Student Marks and Total.M class
		private: 
			int m1,m2,m3,total;
		public:
			StudentMT(int m1,int m2,int m3){
				this->m1=m1; this->m2=m2; this->m3=m3;
				total=m1+m2+m3;
			}
			void show_Marks_Total(){
				cout<<"\nSubject 1 Marks : "<<m1;
				cout<<"\nSubject 2 Marks : "<<m2;
				cout<<"\nSubject 3 Marks : "<<m3;
				cout<<"\nTotal Marks of all Sujects are : "<<total;
			}
	};
	class Student_Detail_Printer:public StudentNR,public StudentMT{
		//Multiple Inherited Publically
		public:
			Student_Detail_Printer(string n,int rn, int ma1,int ma2,int ma3):
				StudentNR(n,rn),StudentMT(ma1,ma2,ma3){
				cout<<"<<<~( Full Detail of the student )~>>>\n";
				show_Name_RollNo();
				show_Marks_Total();
			}
	};
int main(){
	cout<<"<--(Multiple Class Inheritance that use constructor (With args) Program)-->\n";
	Student_Detail_Printer student1("Zohaib khan",221335,87,89,99);
	return 0;
}
