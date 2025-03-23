#include<iostream>
using namespace std;
void factorial(int &,int &);
int main(){
	int f=1,n;
	cout<<"C++ program that pass arg.by.ref to a function.\n";
	cout<<"This program will find the Factorial of a number.\n";
	cout<<"--------------------------------------------------\n";
	cout<<"Now Enter a number : "; cin>>n;
	int num=n;
	factorial(f,n);
	cout<<"The Factorial of "<<num<<" is : "<<f;
	return 0;
}
	void factorial(int &fac,int &n){
		for(; n>=1; n--){
			fac*=n;
		}
	}
