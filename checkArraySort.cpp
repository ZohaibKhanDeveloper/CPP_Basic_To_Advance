/*
Name : ----------
Class No : ------
Assignment Name : SORTED ARRAYS.
Assignment subject : PROGRAMMING FUNDAMENTALS.
Sorted Type : BUBBLE SORT.
Assignment No #01.
BS COMPUTER SCIENCE ICP (1ST SEMESTER).
*/
#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,10,9,8,4};
	cout<<"Unsorted Array is below : \n";
	for(int i=0; i<5; i++){
		cout<<arr[i]<<"\t";
	}
	for(int counter=1; counter<5; counter++){
		for(int i=0; i<5-counter; i++){
			if(arr[i]>arr[i+1]){
				int t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;
			}
		}
	}
	cout<<"\nSorted array are below : \n";
	cout<<"-----------------------------\n";
	cout<<"Array in Ascending order is : \n";
	for(int i=0; i<5; i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\nArray in Descending order is : \n";
	for(int i=4; i>=0; i--){
		cout<<arr[i]<<"\t";
	}
	return 0;
}
