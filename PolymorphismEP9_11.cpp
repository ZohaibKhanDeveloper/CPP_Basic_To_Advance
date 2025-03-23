#include<iostream>
using namespace std;
	class base{
		public: 
			void printMsg(){
				cout<<"Base class Member function.\n";
			}
	};
	class Derive1:public base{
		public: 
			void printMsg(){
				cout<<"First Derive class Member Function.\n";
			}
	};
	class Derive2:public base{
		public: 
			void printMsg(){
				cout<<"Second Derive class Member Function.\n";
			}
	};
int main(){
	base *p;
	Derive1 d1;
	Derive2 d2;
	p=&d1;
	p->printMsg();
	p=&d2;
	p->printMsg();
	return 0;
}
