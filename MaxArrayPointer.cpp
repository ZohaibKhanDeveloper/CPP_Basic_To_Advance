#include<iostream>
using namespace std;
int main(){
	int numbers[5],i,max,*p;
	cout<<"C++ program that find the maximum number in array using pointer.\n";
	cout<<"--------------------------------------------------------------\n";
	p=numbers;
	cout<<"Enter any 5 random numbers in array : \n";
	for(i=0; i<5; i++) cin>>numbers[i];
	max=*p;
	for(i=0; i<5; i++){
		if(*p>max){
			max=*p;
		}
		*p++;
	}
	cout<<"Maximum value in array is : "<<max;
}
