#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	string name,address,grade,op;
	float s1,s2,s3,total;
	int i=1;
	ofstream students("students.dat");
	if(!students){
		cerr<<"Coudnt open file";
		exit(1);
	}
	students<<"NAMES\t\t\tADDRESS\t\t\tTOTAL\tGRADE\n";
	do{
		cout<<"Enter student "<<i<<" name : "; getline(cin,name);
		cout<<"Enter student "<<i<<" address : "; getline(cin,address);
		cout<<"Enter 3 subject marks of the student : \n"; cin>>s1>>s2>>s3;
		total=s1+s2+s3;
		if(total/3>=90) grade="A+";
		else if(total/3>=70) grade="A";
		else if(total/3>=40) grade="B";
		else grade="Fail";
		students<<name<<"\t\t"<<address<<"\t\t"<<total<<"\t\t"<<grade<<endl;
		cout<<"Another Record [y/n] : "; cin>>op;
		cin.ignore();
	}
	while(op=="y"||op=="Y");
	return 0;
}
