/* Program that initialized values to the data members of a class  
using constructor Functions,Which are called automatically when 
an object of the class is created. */
#include<iostream>
using namespace std;
	class init_class_m{
		private:
			int n1,n2,sum;
		public:
			//Constructor Function.
			init_class_m(int a,int b){
				n1=a;
				n2=b;
				sum=n1+n2;
			}	
			//Member Function.
			void print_sum(){
				cout<<n1<<" + "<<n2<<" = "<<sum<<endl;
			}
	};
	int main(){
		cout<<"Values are initialized using constructor to the class data members.\n";
		init_class_m sum1(90,110),sum2(45,20);
		cout<<"Results (sum) is printed by calling Member Functions.\n";
		sum1.print_sum();
		sum2.print_sum();
		return 0;
	}
