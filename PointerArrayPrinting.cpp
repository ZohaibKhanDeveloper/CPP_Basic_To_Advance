#include<iostream>
using namespace std;
int main(){
	int arr[5],*pp,i;
	pp=arr;
	cout<<"Enter values into an array : "<<endl;
	for(i=0; i<5; i++){
	cin>>arr[i];
	}
	cout<<"Printing values of array using pointer : ";
	for(i=0; i<5; i++){
	cout<<*pp++<<"\t";
	}
	return 0;
}
