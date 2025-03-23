#include<iostream>
using namespace std;
int main(){
	int numbers[4]={9,2,7,4};
	cout<<"Unsorted Array = ";
	for(int i=0; i<4; i++){
		cout<<numbers[i]<<"\t";
	}
	int counter=1;
	while(counter<4){
		for(int i=0; i<4-counter; i++){
			if(numbers[i]>numbers[i+1]){
				int t=numbers[i];
				numbers[i]=numbers[i+1];
				numbers[i+1]=t;
			}
		}
		counter++;
	}
	cout<<"\nSorted array in Ascending order = ";
	for(int i=0; i<4; i++){
		cout<<numbers[i]<<"\t";
	}
	cout<<"\nSorted array in Descending order = ";
	for(int i=3; i>=0; i--){
		cout<<numbers[i]<<"\t";
	}
	return 0;
}
