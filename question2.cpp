#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Enter First string : "; getline(cin,str1);
	for(int i=0; i<str1.length(); i++){
		char temp=str1[i];
			switch(temp){
				case 'A':
					str1[i]='Z';
					break;
				case 'B':
					str1[i]='Y';
					break;
				case 'C':
					str1[i]='X';
					break;
				case 'Z':
					str1[i]='A';
					break;
			}
		}
		cout<<"Encrypted Text : "<<str1;
		cout<<"\nEnter second string : "; getline(cin,str2);
	for(int i=0; i<str2.length(); i++){
		int c=0;
		if(str2[i]!=' '){
			c++;
		}
		if(c!=3){
			int tempLen=str2.length()-i;
			str2[i]=str2[tempLen];
		}
		}
		cout<<"Encrypted Text : "<<str2;
	}
