#include<iostream>
using namespace std;
	class date{
		private:
			int  year,month,day;
		public:
			void get_date(){
				cout<<"Enter Year ? "; cin>>year;
				cout<<"Enter Month ? "; cin>>month;
				cout<<"Enter Day ? "; cin>>day;
			}
			void print_date(){
				cout<<"Full Date is : "<<day<<" | "<<month<<" | "<<year;
			}
	};
	int main(){
		cout<<"Simple Class Program that get & print the date.\n";
		date myDate; //Creating object of the class.
		myDate.get_date(); //Caling Member Functions.
		myDate.print_date();
		return 0;
	}
