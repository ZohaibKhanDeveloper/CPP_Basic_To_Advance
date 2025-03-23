#include<iostream>
using namespace std;
	class Student_GPA{
		private:
			static int credit;
			int subMarks,grade; float gpa;
		public:
			Student_GPA(int subMarks){
				this->subMarks=subMarks;
				if(subMarks>=70) grade=4;
				else if(subMarks>=60) grade=3;
				else if(subMarks>=50) grade=2;
				else if(subMarks>=40) grade=1;
				else gpa=0.0;
				gpa=(grade*credit)/credit;
			}
			float getGPA(){
				return gpa;
			}
	};
	int Student_GPA::credit=3;
int main(){
	int st1_Marks,st2_Marks;
	cout<<"Class program that calculate GPA of a Particular Subject.\n";
	cout<<"--------------------------------------------------------\n";
	cout<<"Enter Your OOP subject marks : "; cin>>st1_Marks;
	cout<<"Now Enter your Friend OOP subject marks : "; cin>>st2_Marks;
	Student_GPA s1(st1_Marks),s2(st2_Marks);
	cout<<"Your OOP GPA is : "<<s1.getGPA();
	cout<<"\nYour Friend OOP GPA is : "<<s2.getGPA();
	return 0;
}
