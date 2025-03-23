//Traversing Array(using while loop) Ch#4 ARRAYS, RECORDS, & POINTERS
#include<iostream>
using namespace std;
int main(){
	int data[10]={2,4,6,8,10,14,12,16,20,18};
	//Step-I 
	int k=0;
	//Step-II
	while(k<=9){
		//Step-III  E.G process : Multiply 2 with each number in data array.
		data[k]=data[k]*2;
		cout<<data[k]<<"  ";
		//Step-IV
		k=k+1;
	}
	return 0;
}
