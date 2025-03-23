//Traversing Array(using for loop) Ch#4 ARRAYS, RECORDS, & POINTERS
#include<iostream>
using namespace std;
int main(){
	int data[10]={2,4,6,8,10,14,12,16,20,18};
	//Step-I 
	for(int i=0; i<10; i++){
		data[i]=data[i]/2;
		cout<<data[i]<<"  ";
	}
	return 0;
}
