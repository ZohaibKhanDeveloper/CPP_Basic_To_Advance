#include<iostream>
#include<stdio.h>
using namespace std;
int main(){ 
	cout<<"Enter any type of text (limit=500 characters | complete text by full stop. ) : \n";
	char text[500],alp;
	gets(text); 
	cout<<"Now Enter an alphabet to check it is present in array or not : ";
	cin>>alp;
	int i=0;
	for(int i=0; i<=500; i++){
		if(alp==text[i]){
			cout<<"Alphabet found in the array at index "<<i<<endl;
			cout<<"Alphabet number in the array is "<<i+1<<endl;
		}    
	}	    
	return 0; 
} 
