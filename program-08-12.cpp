#include<iostream>
using namespace std;
	class const_dest{
		public:
			const_dest(){
				cout<<"I am a constructor.\n";
				cout<<"----------------------\n";
			}
			~const_dest(){
				cout<<"I am a destructor.\n";
			}
	};
	int main(){
		const_dest obj1,obj2;
		cout<<"Sum of 12 & 18 is : "<<12+18<<endl;
		return 0;
	}
