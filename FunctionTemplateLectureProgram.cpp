#include<iostream>
using namespace std;
template <class AnyTypeV> //AnyTypeV means Any type value is accepted.
void add(AnyTypeV num1,AnyTypeV num2){
	cout<<"\tSum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
}
//void add(type1v num1,type2v num2){
//	cout<<"Sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
//}
int main(){
	cout<<"\tSimple function template program in which we add two numbers of any type by just one function.\n";
	cout<<"\t<<<--------------------(Exam dapara duwa kawai)-------------------->>>\n";
	cout<<"\tPassing float type args in function call:\n";
	add(2213.35,2213.50);
	cout<<"\t----------------------------------------------------\n";
	cout<<"\tPassing int type args in function call:\n";
	add(221335,221350);
	cout<<"\t~(Try it must.This program is very important for coming OOP paper)~";
	return 0;
}
