 /*
Name : ZOHAIB KHAN.
Class Number : 221335.
Serial Number : 29.
Assignment : SORTING ARRAYS.
(Method-I : BUBBLE SORT).
Subject : PROGRAMMING FUNDAMENTALS.
Assignment #01.
BS COMPUTER SCIENCE ICP (1st semester).
*/
#include<iostream>
using namespace std;
int main(){
	cout<<"Random array values sorting program (BUBBLE SORT) : \n";
	char numbers[5];
	for(int i=0; i<5; i++){
		cout<<"Enter Element(Any number) "<<i+1<<" : ";
		cin>>numbers[i];
	}
	/*
		As we know that "n-1" iterations are required to sort an array.
		In array "number of elements=n=5" then "5-1=4" iterations are required.
	*/  
	int counter=1;
	while(counter<4){
		for(int i=0; i<5-counter; i++){
			if(numbers[i]>numbers[i+1]){
				int t=numbers[i];
				numbers[i]=numbers[i+1];
				numbers[i+1]=t;
			}
		}
		counter++;
	}
	cout<<"The values (you entered in the array) in sorted form are : \n";
	cout<<"**********************************************************\n";
	cout<<"Sorted Array in Ascending order : \n";
	for(int i=0; i<5; i++){
		cout<<numbers[i]<<"\t";
	}
	cout<<"\nSorted Array in Descending order : \n";
	for(int i=4; i>=0; i--){
		cout<<numbers[i]<<"\t";
	}
	return 0;
}
