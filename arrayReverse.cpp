#include<iostream>
using namespace std;
int main(){
	cout<<"Enter 5 numbers in array. I will reverse your array : \n";
	int forward[5],reverse[5],ri=4;
	for(int i=0; i<5; i++){
		cin>>forward[i];
		reverse[ri-i]=forward[i];
	} 
	cout<<"__________________________________________\n";
	cout<<"First Getted Array : \n";
	for(int i=0; i<5; i++){
		cout<<"Forward["<<i<<"] = "<<forward[i]<<endl;
	}
	cout<<"__________________________________________\n";
	cout<<"Reversed operated Array : \n";
	for(int i=0; i<5; i++){
		cout<<"reversed["<<i<<"] = "<<reverse[i]<<endl;
	}
	return 0;
}
