#include<iostream>
using namespace std;
	class StudentDMC{
		private:
			string stud_name;
			int stud_rollno,eng_marks,math_marks,urdu_marks;
			float total_marks,percentage;
		public:
			StudentDMC(string n,int rn,int em,int mm,int um){
				stud_name=n; stud_rollno=rn; eng_marks=em; 
				math_marks=mm; urdu_marks=um;
			}
			void calculateTotalMarks(){
				total_marks=eng_marks+math_marks+urdu_marks;
			}
			void calculatePercentage(){
				percentage=total_marks*100/300;
			}
			string getName(){ return stud_name; }
			int getRollNo(){ return stud_rollno; }
			int getEngMarks(){ return eng_marks; }
			int getMathMarks(){ return math_marks; }
			int getUrduMarks(){ return urdu_marks; }
			int getTotalMarks(){ return total_marks; }
			int getPercentage(){ return percentage; }
	};
int main(){
	StudentDMC student("ZOHAIB KHAN",221335,69,99,87);
	student.calculateTotalMarks();
	student.calculatePercentage();
	cout<<"Class program that display student DMC.\n";
	cout<<"<~--------------(DETAILED MARKS CERTIFICATE)-------------~>\n";
	cout<<"NAME : \""<<student.getName()<<"\"";
	cout<<"\nROLL NO : "<<student.getRollNo();
	cout<<"\nENGLISH Marks : "<<student.getEngMarks();
	cout<<"\nMATH Marks : "<<student.getMathMarks();
	cout<<"\nURDU Marks : "<<student.getUrduMarks();
	cout<<"\nTOTAL MARKS : "<<student.getTotalMarks();
	cout<<"\nPERCENTAGE (TOTAL 300): "<<student.getPercentage();
	return 0;
}
