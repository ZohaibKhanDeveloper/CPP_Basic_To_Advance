#include<iostream>
#include<stdio.h>
using namespace std;
	void copyText(char[100],char[100]);
int main(){
	char s1[100],s2[100];
	cout<<"C++ Program that copy one string to another one by user-Defined function.\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"Enter First String : ";
	gets(s1);
	cout<<"Enter Second String : ";
	gets(s2);
	copyText(s1,s2); 
	return 0;	
}
void copyText(char str1[100],char str2[100]){
	cout<<"-----Strings Before Copying-----\n";
	cout<<"First String : \""<<str1<<"\""<<endl;
	cout<<"Second String : \""<<str2<<"\""<<endl;
	cout<<"----String After copying 2nd to 1st one----\n";
//	Copying string 2 to string 1.
	for(int i=0; str2[i]!='\0'; i++){
		str1[i]=str2[i];
	} 
	cout<<"Now The first string after copying : \""<<str1<<"\"";
}
