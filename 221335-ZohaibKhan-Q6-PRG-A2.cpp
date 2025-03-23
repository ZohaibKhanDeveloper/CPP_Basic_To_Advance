/* Name:Zohaib khan. Class No:221335
   Assignment : Classes program Q6 
   OOP part-I By Sir TAUSEEEF UR REHMAN.
   Assignment No.02  */
#include<iostream>
#include<string.h>
using namespace std;
	class PersonsRecords{
		private:
			string name;
			int age;
		public:
			void setName(string n){
					name=n;
			}
			void setAge(int a){
				age=a;
			}
			void PrintRecords(){
				cout<<name<<" age is "<<age<<endl;
			}
	};
	int main(){
		PersonsRecords persons[10];
		string Pname; int P_age;
		cout<<"Class program that take and print records of 10 persons.\n";
		cout<<"-----------------~*~(Taking Records)~*~-----------------\n";
		for(int i=0; i<10; i++){
			cout<<"Enter Person "<<i+1<<" name : "; getline(cin,Pname);
			persons[i].setName(Pname);
			cout<<"Enter Person "<<i+1<<" age : "; cin>>P_age;
			persons[i].setAge(P_age);
			cin.ignore();
		}
		cout<<"-----------------~*~(Printing Records)~*~-----------------\n";
		for(int i=0; i<10; i++){
			persons[i].PrintRecords();
		}
		return 0;
	}
	
	
