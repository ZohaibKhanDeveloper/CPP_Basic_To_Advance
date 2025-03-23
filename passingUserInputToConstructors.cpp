#include<iostream>
using namespace std;
	class sum{
		private:
			float num1,num2;
		public:
			sum(float n1,float n2){
				num1=n1; num2=n2;
				cout<<"Sum of "<<num1<<" & "<<num2<<" : "<<num1+num2;
			}
	};
	int main(){
		float n1,n2;
		cout<<"\t~*~(Class program For addition)~*~\n";
		cout<<"Enter Fisrt number : "; cin>>n1;
		cout<<"Now Enter Second Number : "; cin>>n2;
		sum addition_result(n1,n2);
		return 0;
	}
