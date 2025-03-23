#include<iostream>
using namespace std;
void print_using_passing_Pointer_Arg(char *st){
	while(*st!='\0'){
		cout<<*st;
		*st++;
	}
}
int main(){
	char str[9]="Pakistan";
	cout<<"C++ Program that print a string by passing pointer to a function as an argument.\n";
	cout<<"-----------------------------------------------------------------------------\n";
	cout<<"String Printed by Function call is : \"";
	print_using_passing_Pointer_Arg(str);
	cout<<"\"";
	return 0;
}
