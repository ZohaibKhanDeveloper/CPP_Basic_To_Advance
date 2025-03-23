/* Name:Zohaib khan. Class No:221335
   Assignment : Classes program Q6 
   OOP part-I By Sir TAUSEEEF UR REHMAN.
   Assignment No.02  */
#include<iostream>
using namespace std;
	class records{
		private:
			char name[20];
			int age;
		public:
			void Take_records(){
					cout<<"Enter Person Name : "; cin>>name;
					cout<<"Enter Person age : "; cin>>age;
			}
			void print_records(){
				cout<<name<<" age is "<<age;
			}
	};
	int main(){
		records persons[10];
		cout<<"Class program that take and print records of 10 persons.\n";
		cout<<"-----------------~*~(Taking Records)~*~-----------------\n";
		for(int i=0; i<10; i++){
			persons[i].Take_records();
		}
		cout<<"-----------------~*~(Printing Records)~*~-----------------\n";
		for(int i=0; i<10; i++){
			cout<<"Person "<<i+1<<" Data : \"";
			persons[i].print_records();
			cout<<"\"\n";
		}
		return 0;
	}
	
	
