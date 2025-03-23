#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
	ofstream data("records.dat");
	char name[20];
	int age,i;
	cout<<"File Handling program that only Enter data into a data file.\n";
	cout<<"-----------------------------------------------------------\n";
	for(i=1; i<=5; i++){
		cout<<"Enter Name of person "<<i<<" : "; gets(name);
		cout<<"Now Enter person's age : "; cin>>age;
		data<<name<<"\t"<<age<<endl;
		cin.ignore();
	}
	cout<<"Data is successfully saved into file (records.dat).";
	return 0;
}
