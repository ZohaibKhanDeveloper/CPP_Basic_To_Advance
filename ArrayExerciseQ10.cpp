#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char text[50],c;
	cout<<"Enter any text of maximum length (50 characters) :\n";
	gets(text);
	cout<<"Now Enter a character to delete it from the above string : ";
	cin>>c;
	cout<<"String before deleting the character : \""<<text<<"\"\n";
	for(int i=0; text[i]!='\0'; i++){
		if(c==text[i]){
			text[i]=' ';
		}
	}
	cout<<"String after deleting the character : \""<<text<<"\"\n";
	return 0;
}
