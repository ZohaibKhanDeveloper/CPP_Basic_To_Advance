#include<iostream>
#include<stdio.h>
using namespace std;
//Function prototype.
int len_of_string(char[100]);
int main(){
	int length;
	char text[100];
	cout<<"This program will find the length of a string without using any built-in function.\n";
	cout<<"This program use a user-defined function.\n";
	cout<<"----------------------------------------------\n";
	cout<<"Enter any string or text that you want (Max len : 100 characters) :\n";
	gets(text);
//	Function Call.
	length=len_of_string(text);
	cout<<"Length of the string is (Including spaces) : "<<length;
	return 0;
}
//Function definition.
	int len_of_string(char str[100]){
		int len;
		for(int i=0; str[i]!='\0'; i++){
			len++;
		}
		return len;
	}
