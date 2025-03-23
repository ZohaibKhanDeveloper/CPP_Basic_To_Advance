#include<iostream>
using namespace std;
struct student{
	char name[20];
	int age; 
};
int main(){
	cout<<"Structure swaping program : \n";
	student s1,s2,temp;
	cout<<"Enter name of the student : ";
	cin>>s1.name;/*
	For Example I Entered name : Zohaib khan.
	It Will be stored in the structure memeber name[20].
	*/
	cout<<"\nNow Enter the age of the student : ";
	cin>>s1.age;
	cout<<"Great!Enter 2nd student name : ";
	cin>>s2.name;
	cout<<"Now Enter 2nd student age : ";
	cin>>s2.age;
	cout<<"Structures before copiying or swaping : \n";
	cout<<"Structure one : ";
	cout<<s1.name<<"\t\t"<<s1.age<<endl;
	cout<<"Structure two : ";
	cout<<s2.name<<"\t\t"<<s2.age;
	temp.age=s1.age;
	for(int i=0; s1.name[i]!='\0'; i++)
	temp.name[i]=s1.name[i];
	s1.age=s2.age;
	for(int i=0; s1.name[i]!='\0'; i++)
	s1.name[i]=s2.name[i];
	s2.age=temp.age;
	for(int i=0; temp.name[i]!='\0'; i++)
	s2.name[i]=temp.name[i];
	cout<<"\nStructure after swaping or sorting : \n";
	cout<<"Structure one : ";
	cout<<s1.name<<"\t\t"<<s1.age<<endl;
	cout<<"Structure two : ";
	cout<<s2.name<<"\t\t"<<s2.age;
	return 0;
}
