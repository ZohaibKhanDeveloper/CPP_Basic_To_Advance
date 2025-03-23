#include<iostream>
using namespace std;
int main(){
	int num,counter;
	cout<<"This program will print all the prime numbers from 1 to 100:\n";
	cout<<"<------------------------------------------------------------->\n";
	for(num=1; num<=100; num++){
		for(int i=num; i>=1; i--){
		if(num%i==0){
			counter++;
		}
		}
		if(counter==2){
			cout<<num<<" ";
			counter=0;
		}
		else{
			counter=0;
		}
	}
	return 0;
}
