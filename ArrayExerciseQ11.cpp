#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char text[100];
	int len=0;//variable to count the length of the string.
	cout<<"Enter any text msg (Max len : 100 characters) :\n";
	gets(text);
	for(int i=0; text[i]!='\0'; i++)
	len++;
	cout<<"The Length of the Entered string (Including Blank spaces) : "<<len;
	return 0;
}
