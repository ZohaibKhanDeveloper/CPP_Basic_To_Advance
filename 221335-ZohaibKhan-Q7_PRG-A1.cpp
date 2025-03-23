/* Name:Zohaib khan. Class No:221335
   Assignment : Classes program Q7 
   OOP part-I By Sir TAUSEEEF UR REHMAN. Assignment No.02  */
#include<iostream>
using namespace std;
	class Factorial{
		private:
			int n,fact;
		public:
			Factorial(){
				cout<<"------------Factorial------------\n";
				cout<<"Enter a number to find its factorial ? "; cin>>n;
				for(int i=n; i>=1; i--)
					fact*=i;
				cout<<"Factorial of the Entered Number is : "<<fact<<endl;
			}
	};
	int Factorial::fact=1;
	class Sum{
		private: 
			int nums[3],result=0;
		public:
			Sum(){
				cout<<"------------Sum of 3 numbers------------\n";
				cout<<"\nEnter any 3 numbers: \n";
				for(int i=0; i<3; i++){
					cin>>nums[i];
					result+=nums[i];
				}
				cout<<"The sum of the Entered 3 numbers is : "<<result;
			}
	};
	int main(){
		cout<<"This program use 2 classes.\n";
		Factorial fact1; Sum sum1;
		return 0;
	}
