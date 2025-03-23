#include<iostream>
#include<stdio.h>
using namespace std;
	struct Identity{
		//Identity structure size is 62 bytes. 60 bytes of character & 2 bytes of Integer.
		char name[20],city[20],country[20];
		int code;	
	};
int main(){
	Identity person;//structure type varaible : Identity.
	cout<<"This is a simple structure program.\n";
	//Taking detail from the user.
	cout<<"Enter the name of the person : ";
	gets(person.name);
	cout<<"Now Enter Your City Name : ";
	gets(person.city);
	cout<<"Now Enter Your country name : ";
	gets(person.country);
	cout<<"Great! Now Enter your code : ";
	cin>>person.code; //Now Printing Detail of the user below.
	cout<<"Hello!! "<<person.name<<" from "<<person.city<<" "<<person.country<<" your code is "<<person.code;
	return 0;
}
