#include<iostream>
#include<stdio.h>
using namespace std;
	void bio_data(char n[15],int exp,char skill[20],char study[20]){
		cout<<"Your name : "<<n;
		cout<<"\nYour Skill : "<<skill;
		cout<<"\nExperice in your skill : "<<exp<<" years.";
		cout<<"\nYou are studying in : "<<study;
	}
int main(){
	int ex;
	char name[15],sk[20],stdy[20];
	cout<<"Simple program that print the Bio-data using function.\n";
	cout<<"-------------------------------------------------------\n";
	cout<<"---------Statements Before Function call----------\n";
	cout<<"What is your name? : ";
	gets(name);
	cout<<"Write your skill name : ";
	gets(sk);
	cout<<"Now Enter your Study Level : ";
	gets(stdy);
	cout<<"Experiance of your skill (In years) : ";
	cin>>ex;
	cout<<"---------Statements By Function call----------\n";
	bio_data(name,ex,sk,stdy);
	return 0;
}
