#include<iostream>
using namespace std;
template<class anyType1,class anyType2>
anyType1 product(anyType1 x,anyType2 y){
//	cout<<"Product of "<<x<<" and "<<y<<" is : "<<x*y;
	return x*y;
}
int main(){
	cout<<"This is a simple function template program.\n";
	cout<<"Passing Two arguments of different types (Result): \n";
	cout<<product(11,5.3);
//	cout<<"\nPassing Two arguments of float type (Result): \n";
//	product(10.5,5.5);
//	cout<<"\nPassing Two arguments of int type (Result): \n";
//	product(5,5);
	return 0;
}
