#include<iostream>
using namespace std;
	class calculation{
		private:
			float n1,n2;
		public:
			void getValues();
			void add();
			void subtract();
	};
	int main(){
		calculation numbers;
		cout<<"Working of Member Functions in class that are defined outside the class.\n";
		numbers.getValues();
		numbers.add();
		numbers.subtract();
		return 0;
	}
	void calculation::getValues(){
		cout<<"Enter any two numbers : \n";
		cin>>n1>>n2;
	}
	void calculation::add(){
		cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
	}
	void calculation::subtract(){
		cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
	}
