#include<iostream>
using namespace std;
	int length(char*);
int main(){
	char str[30];
	cout<<"C++ Program that find the length of a string using pointer.\n";
	cout<<"-----------------------------------------------------------\n";
	cout<<"Enter a string : ";
	gets(str);
	cout<<"The Length of the above Entered string is : "<<length(str);
	return 0;
}
 int length(char *sl){
 	int l=0; 
 	while(*sl!='\0'){
 		l++;
 		*sl++;
	 }
	 return l;
 }
