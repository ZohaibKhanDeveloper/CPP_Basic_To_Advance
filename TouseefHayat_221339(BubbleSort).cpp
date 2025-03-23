/*
Name : Touseef Hayat.
Class No. 221339.
Assignment (Subject): Programming Fundamentals.
Assignment : Sorting Arrays.
Method-I : Bubble Sort.
BS Computer Science ICP (1st Semester).
*/
#include<iostream>
using namespace std;
int main(){
	int Arr[4]={9,4,11,2};
	cout<<"Sorting Array By Bubble Sort : \n";
	cout<<"Array Before Sorting : ";
	for(int i=0; i<4; i++){
		cout<<Arr[i]<<"\t";
	}
	cout<<endl;
	for(int i=1; i<4; i++){
		for(int j=0; j<4-i; j++){
			if(Arr[j]>Arr[j+1]){
				int t=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=t;
			}
		}
	}
	cout<<"Sorted Array (Ascending order) : ";
	for(int i=0; i<4; i++){
		cout<<Arr[i]<<"\t";
	}
	cout<<endl;
	cout<<"Sorted Array (Descending order) : ";
	for(int i=3; i>=0; i--){
		cout<<Arr[i]<<"\t";
	}
	return 0;
}
