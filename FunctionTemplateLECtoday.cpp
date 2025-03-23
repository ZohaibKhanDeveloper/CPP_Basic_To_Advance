#include<iostream>
using namespace std;
template <class AnyTypeV,class AnyTypeV2> //AnyTypeV means Any type value is accepted.
void add(AnyTypeV num1,AnyTypeV2 num2){
	cout<<"Sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
}
//void add(type1v num1,type2v num2){
//	cout<<"Sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
//}
int main(){
	cout<<"Simple function template program in which we add two numbers.\n";
	cout<<"<<<--------------------(Exam dapara duwa kawai)-------------------->>>\n";
	cout<<"Passing float type args in function call:\n";
	add(2213.35,2213.50);
	cout<<"----------------------------------------------------\n";
	cout<<"Passing int type args in function call:\n";
	add(221335,221350);
	cout<<"Passing different types of args in function call:\n";
	add(221335,2213.44);
	cout<<"~(Try it must.This program is very important for coming OOP paper)~";
	return 0;
}
