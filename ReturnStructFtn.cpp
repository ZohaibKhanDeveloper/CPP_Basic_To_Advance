#include<iostream>
#include<stdio.h>
using namespace std;
	struct student{
		char name[20];
		int rn;//Declared fro roll number of the student.
	};
	student Take_data();//Function prototype(Declared as struct type function).
int main(){
	student s1;
	cout<<"C++ Program that return a structure from a function.\n";
	cout<<"----------------------------------------------------\n";
	s1=Take_data();//Functio call.
	cout<<"The Name of the student is : "<<s1.name;
	cout<<"\nThe Roll No. of the student is : "<<s1.rn;
	return 0;
}
/*Data from the student is taken in the function.
And then is returned to the structure variable in main()*/
	student Take_data(){//Definition of the function of struct type.
		student st;
		cout<<"Enter the name of the Student : ";
		gets(st.name);
		cout<<"Enter the Roll No. of the Student : ";
		cin>>st.rn;
		return st; //Return the data of struct type.
	}
