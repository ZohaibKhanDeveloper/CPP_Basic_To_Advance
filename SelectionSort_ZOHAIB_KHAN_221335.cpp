/*
Name : ZOHAIB KHAN.
Class Number : 221335.
Serial Number : 29.
Assignment : SORTING ARRAYS.
(Method-II : SELECTION SORT).
Subject : PROGRAMMING FUNDAMENTALS.
Assignment #01.
BS COMPUTER SCIENCE ICP (1st semester).
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"C++ Program that sort an array to n number of elements.\n";
	cout<<"Enter a number for (number of elements) in array : ";
	cin>>n;
	int numbers[n];
	cout<<"Enter any "<<n<<" integers randomly in array to sort : \n";
	for(int i=0; i<n; i++){
		cin>>numbers[i];
	}
	cout<<"\n----------------------------------------------------------\n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~UNSORTED ARRAY~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	for(int i=0; i<n; i++){
		cout<<numbers[i]<<"\t";
	}
	//sorting array below from line 13-to-21.
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(numbers[j]<numbers[i]){
				int t=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=t;
			}
		}
	}
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~SORTED ARRAY~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"\nSorted array in Ascending order : \n";
	for(int i=0; i<n; i++){
		cout<<numbers[i]<<"\t";
	}
	cout<<"\nSorted array in Descending order : \n";
	for(int i=n-1; i>-1; i--){
		cout<<numbers[i]<<"\t";
	}
	return 0;
}
