#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char text[50],copyT[50],c;
	int l;
	cout<<"Enter any text that you want (Max len : 50 characters) :\n";
	gets(text);
	for(int i=0; text[i]!='\0'; i++){
	copyT[i]=text[i];
	}
	cout<<"Now Enter a number to select a specific location in text : ";
	cin>>l;
	cout<<"Specified location : "<<l<<endl;
	cout<<"Character on the Location : "<<text[l]<<endl;
	cout<<"Now Enter a Character to replace specified one : ";
	cin>>c;
	text[l]=c;
	cout<<"Original String : \""<<copyT<<"\""<<endl;
	cout<<"String after changing the character : \""<<text<<"\""<<endl;
	return 0;
}
