#include<iostream>
using namespace std;
	class MarksPercentage{
		private:
			static float total;
			int marks;
			float percent;
		public:
		int calculate_percentage_and_print(int marks){
			this->marks=marks;
			percent=(marks/total)*100;
			if(percent<50)
				cout<<"Try again you are failed!!!.You got only "<<percent<<" % marks.";
			else
			cout<<"Congratulations!!!.You got "<<percent<<" % marks.";
		}
	};
	float MarksPercentage::total=150.0;
	int main(){
		MarksPercentage s1_marks; int ma;
		cout<<"This program use this pointer for reducing the naming conflicts.\n";
		cout<<"---------------------------------------------------------------\n";
		cout<<"Enter your obtained marks in a subject (Total:150) : \n";
		cin>>ma;
		s1_marks.calculate_percentage_and_print(ma);
		return 0;
	}
