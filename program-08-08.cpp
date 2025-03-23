#include<iostream>    
using namespace std;
	class simple_msg{
		public:
			simple_msg(){
				cout<<"I am a constructor.\n";
			}
	};
	int main(){
		cout<<"Below Msgs are printed using constructor.\n";
		cout<<"----------Printed by simply creating objects----------\n";
		simple_msg text[10];
		return 0;
	}
