#include<iostream>
using namespace std;
	class ParentClass{
		public:
			virtual void msg(){
				cout<<"I am a simple message of Parent Class.\n";
			}
	};
	class Child1:public ParentClass{
		public:
			void msg(){
				cout<<"I am a simple message of Child(Derived) 1 Class.\n";
			}
	};
	class Child2:public ParentClass{
		public:
			void msg(){
				cout<<"I am a simple message of Child(Derived) 2 Class.\n";
			}
	};
int main(){
	ParentClass *pointer;
	Child1 c1; Child2 c2;
	cout<<"This class program use virtual functions (overriding).\n";
	cout<<"<---------------------------------------------------->\n";
	pointer=&c1;
	pointer->msg();
	pointer=&c2;
	pointer->msg();
	return 0;
}
