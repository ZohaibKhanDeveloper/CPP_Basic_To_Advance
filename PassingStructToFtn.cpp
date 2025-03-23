#include<iostream>
using namespace std;
	struct data{
		char name[20];
		int age;
	};
	void display_data(data);
int main(){
	data p1,p2;
	cout<<"C++ Program that pass structure to a function as an argument.\n";
	cout<<"-----------------------------------------------------------\n";
	cout<<"Enter person 1 Name : ";
	cin>>p1.name;
	cout<<"Now Enter Person 1 age : ";
	cin>>p1.age;
	cout<<"Enter person 2 Name : ";
	cin>>p2.name;
	cout<<"Now Enter Person 2 age : ";
	cin>>p2.age;
	cout<<"Personal Data of Person 1 : \n";
	display_data(p1);
	cout<<"\nPersonal Data of Person 2 : \n";
	display_data(p2);
	return 0;
}
void display_data(data p){
		cout<<"Name : "<<p.name<<endl;
		cout<<"Age : "<<p.age;
	}
