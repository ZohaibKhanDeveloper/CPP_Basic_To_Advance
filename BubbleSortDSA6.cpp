//Bubble Sort Ch#04 ARRAYS,RECORDS, & POINTERS
#include<iostream>
using namespace std;
int main(){
	int data[10]={2,5,3,7,4,6,8,10,15,13};
//	Step-I
	for(int k=1; k<9; k++){
//		Step-II
		int ptr=1;
//		Step-III
		while(ptr<=10-k){
			if(data[ptr]>data[ptr+1]){
				int temp=data[ptr];
				data[ptr]=data[ptr+1];
				data[ptr+1]=temp;
			}
			ptr+=1;
		}
	}
//	Step-IV Exit.
	cout<<"Sorted array is : ";
	for(int i=0; i<10; i++) cout<<data[i]<<"   ";
	return 0;
}
