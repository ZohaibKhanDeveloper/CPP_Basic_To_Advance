#include<iostream>
#include<stdio.h>
using namespace std;
	char combine(char str1[50],char str2[50]){
		int i,pos=0;
		char comb[100];
		for(i=0; str1[i]!='\0'; i++){
			comb[i]=str1[i];
			pos++;
		}
		for(i=0,pos; str2[i]!='\0'; i++,pos++){
			comb[pos]=str2[i];
		}
		cout<<comb;
	}
int main(){
	char s1[50],s2[50];
	cout<<"C++ Program that pass two strings to a function and combine it.\n";
	cout<<"----------------------------------------------------------------\n";
	cout<<"Enter First string : (Max len : 50 characters):\n";
	gets(s1);
	cout<<"Now Enter second string (Max len : 50 characters):\n";
	gets(s2);
	cout<<"Combined string is : \n";
	combine(s1,s2);
	return 0;
}
