#include<iostream>
using namespace std;
	class StudentNR{ //Student Name and Roll no class
		private:
			string name; int rollNo;
		public:
			StudentNR(){
				cout<<"Enter Your name : "; getline(cin,name);
				cout<<"Enter Your Roll No : "; cin>>rollNo;
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
			StudentMT(){
				cout<<"Enter Subject 1 Marks : "; cin>>m1;
				cout<<"Enter Subject 2 Marks : "; cin>>m2;
				cout<<"Enter Subject 3 Marks : "; cin>>m3;
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
			void showDetail(){
				cout<<"<<<~( Full Detail of the student )~>>>\n";
				show_Name_RollNo();
				show_Marks_Total();
			}
	};
int main(){
	cout<<"<--(Multiple Class Inheritance with constructor Program)-->\n";
	Student_Detail_Printer student1;
	student1.showDetail();
	return 0;
}
