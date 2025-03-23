#include<iostream>
using namespace std;
int main(){
	int numbers[5],max;
	cout<<"This program will find the maximum value in an array.\n";
	for(int i=0; i<5; i++){
		cout<<"Enter Element number \""<<i+1<<"\" : ";
		cin>>numbers[i];
	}
	max=numbers[0];
	for(int i=0; i<5; i++){
		if(numbers[i]>max){
			max=numbers[i];
		}
	}
	cout<<"Maximum value in array is "<<max<<endl;
	return 0;
}
