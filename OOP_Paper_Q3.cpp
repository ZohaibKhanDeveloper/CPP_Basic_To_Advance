#include<iostream>
using namespace std;
	class AverageMarks{
		private:
			int stud_rollno; float avg_marks; float *marks; int total;
		public:
			void setRollNo(int rn){ stud_rollno=rn; }
			void ArrayOfMarks(int n){
				marks=new float[n];
				cout<<"Enter "<<n<<" Subject Marks : \n";
				for(int i=0; i<n; i++){
					cin>>marks[i];
					total=total+marks[i];
				}
				avg_marks=total/n;
			}
			int getRollNo(){ return stud_rollno; }
			float getAvgMarks(){ return avg_marks; }
			~AverageMarks(){ delete[]marks; }
	};
int main(){
	cout<<"Class program that find average of marks.\n";
	cout<<"This program use Dynamic memory allocation and De-allocation.\n";
	cout<<"-------------------------------------------------------------\n";
	int rn,ns;
	AverageMarks stud1_marks;
	cout<<"Enter Your Roll No : "; cin>>rn;
	stud1_marks.setRollNo(rn);
	cout<<"Enter number of subjects : "; cin>>ns;
	stud1_marks.ArrayOfMarks(ns);
	cout<<"Roll no of the Student is : "<<stud1_marks.getRollNo();
	cout<<"\nAverage Marks of the student is : "<<stud1_marks.getAvgMarks();
	return 0;
}
