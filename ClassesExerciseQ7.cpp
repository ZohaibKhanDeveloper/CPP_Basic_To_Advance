#include<iostream>
using namespace std;
	class factorial{
		private:
			int n,fact=1;
		public:
			factorial(){
				cout<<"------------Factorial------------\n";
				cout<<"Enter a number to find its factorial ? "; cin>>n;
				for(int i=n; i>=1; i--)
					fact*=i;
				cout<<"Factorial of the Entered Number is : "<<fact<<endl;
			}
	};
	class sum{
		private: 
			int nums[3],result=0;
		public:
			sum(){
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
		factorial fact1; sum sum1;
		return 0;
	}
	
