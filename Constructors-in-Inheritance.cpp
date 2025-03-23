#include<iostream>
using namespace std;
	class baseClass{
		public:
			baseClass(){
				cout<<"I am a Base Class Constructor.\n";
			}
	};
	class childClass:public baseClass{
		public:
		childClass(){
			cout<<"I am a Child Class Constructor.\n";
		}
	};
	int main(){
		cout<<"Class Constructors in Inheritance.\n";
		cout<<"------------------------------------\n";
		childClass obj1;
		return 0;
	}
