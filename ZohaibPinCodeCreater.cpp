#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string alphabets="abcdefghijklmnopqrstuvwxyz",name;
	int codes[26],pinCode=0,sumOfCodes=0;
	for(int i=97,j=0; i<123,j<26; i++,j++){
		codes[j]=i;
		sumOfCodes+=codes[j];
	}
	cout<<"This program will create a pin code on the basis of your name.\n";
	cout<<"<--------------------------------------------------------------->";
//	cout<<"Sum is : "<<sumOfCodes;
	cout<<"\nEnter Your Name (Your name must Include Small letters) : "; getline(cin,name);
		for(int i=0; i<name.length(); i++){
			for(int j=0; j<26; j++){
				if(name[i]==alphabets[j]){
					pinCode+=codes[j];
				}
			}
		}
		if(pinCode<1000){
			pinCode+=sumOfCodes;
		}
	cout<<"Dear "<<name<<" Pin Code on the basis of your name is : "<<pinCode;
	return 0;
}
