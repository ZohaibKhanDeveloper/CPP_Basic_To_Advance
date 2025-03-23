#include<iostream>
using namespace std;
int main(){
	/*
	Question of viva by Sir Tauseef-ur-Rehman.
	How to acces an element in array by pointer and how to change it.
	*/
	int nums[4];
	int *rep;
	cout<<"Pointer program to access third Element in array.\n";
	cout<<"That element will be replace by 3.\n";
	cout<<"Enter any Four integer in an array : \n";
	for(int i=0; i<4; i++){
		cin>>nums[i];
	}
	rep=nums;
	for(int i=0; i<2; i++){
		++rep;
	}
	*rep=3;
	cout<<"3rd element changed by pointer see full array below :\n";
	for(int i=0; i<4; i++){
		cout<<"nums["<<i<<"] = "<<nums[i]<<endl;
	}
	return 0;
}
