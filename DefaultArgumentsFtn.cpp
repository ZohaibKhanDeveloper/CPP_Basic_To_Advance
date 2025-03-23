#include<iostream>
using namespace std;
//	Default arguments in function declerator.
	void display(char name[10]="Zohaib",int age=18){
		cout<<"Your name is : "<<name;
		cout<<"\nYour age is : "<<age;
	}
int main(){
	cout<<"In this program Function use Default Arguments.\n";
	cout<<"-----------------------------------------------\n";
	//Without passing its arguments its use his default Args. 
	cout<<"Function call by passing no Arguments : \n";
	display();//In this call it will use Default arguments.
	cout<<"\nFunction call By passing Arguments : \n";
	//In the below call it will use the arguments which are passed.
	display("Ali Rehman",19);
	return 0;
}
