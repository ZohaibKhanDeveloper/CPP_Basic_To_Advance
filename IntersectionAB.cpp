#include<iostream>
using namespace std;
int main(){
	char A[5],B[5];//For set A and B Elements.
	cout<<"C++ Program that find the intersection of two sets.\n";
	cout<<"---------------------------------------------------\n";
	cout<<"Enter Set A Elements : \n";
	for(int i=0; i<5; i++){
		cin>>A[i];
	}
	cout<<"Enter Set B Elements : \n";
	for(int i=0; i<5; i++){
		cin>>B[i];
	}
	cout<<"A intersection B is : ";
	cout<<"{ ";
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(A[i]==B[j]){
				cout<<A[i]<<" ";
			}
		}
	}
	cout<<"}";
	return 0;
}
