#include<iostream>
#include<conio.h>
using namespace std;
//Written By Zohaib khan by using the concept of book.
int main(){
	char text[8];
	cout<<"Enter any Eight characters from the keyboard : \n";
	for(int i=0; i<8; i++){
		text[i]=getch();
	}
	text[8]='\0';
	cout<<"Getted Text or Characters are : "<<text;
	return 0;
}
