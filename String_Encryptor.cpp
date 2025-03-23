#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string text;
	string textA="ABCDEFGHIJKLM"; 
	string textB="ZYXWVUTSRQPON";
	cout<<"Enter a String : ";
	getline(cin,text);
	for(int i=0; i<text.length(); i++){
		for(int j=0; j<13; j++){
			if(text[i]==' '){
				text[i]=' ';
			}
			else if(text[i]==textA[j]){
				text[i]=textB[j];
			}
		}
	}
	cout<<"Encrypted Text is : "<<text;
}
