#include<iostream> 
#include<string.h> 
using namespace std;
	class Student{
		private:
			string name,address;
		public:
			Student(string na,string addr){ name=na; address=addr; }
			void showStD(){
				cout<<"Name of the student is : "<<name;
				cout<<"\nAddress is : "<<address;
			}
	};
	class totalM_of_student:public Student{
		private:
			int s1,s2,s3,total;
		public:
			totalM_of_student(string n,string ad,int m1,int m2,int m3):Student(n,ad){
				s1=m1; s2=m2; s3=m3;
				total=s1+s2+s3;
			}
			void showdetail(){
				showStD();
				cout<<"\nSubject 1 Marks : "<<s1;
				cout<<"\nSubject 2 Marks : "<<s2;
				cout<<"\nSubject 3 Marks : "<<s3;
				cout<<"\nTotal Marks : "<<total; }
	};
	int main(){
		totalM_of_student st1("Zohaib khan","Peshawer",89,87,99);
		cout<<"Class Inheritance Program in which both classes use a constructor and takes arguments.\n";
		st1.showdetail();
		return 0;
	}
