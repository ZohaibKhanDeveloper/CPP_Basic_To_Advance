#include<iostream>
using namespace std;
/*	Exercise of Array Chapter.
	Page No. 145.
	Question No.6 Program.	*/
int main(){
	int numbers[10],EvenC,OddC;
	EvenC=OddC=0;//Compound Assignment.
	cout<<"Enter any 10 numbers in array : \n";
	for(int i=0; i<10; i++){
		cin>>numbers[i];
		if(numbers[i]%2==0){
			EvenC++;
		}
		else{
			OddC++;
		}
	}
	cout<<"Total Even Numbers in Entered array is : "<<EvenC<<endl;
	cout<<"Total Odd Numbers in Entered array is : "<<OddC<<endl;
	return 0;
}
