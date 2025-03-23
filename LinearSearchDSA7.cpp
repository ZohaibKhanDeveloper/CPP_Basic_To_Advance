//Linear Search Ch#04 ARRAYS, RECORDS, & POINTERS
#include<iostream>
using namespace std;
int main(){
	int data[10]={2,4,6,3,8,10,14,12},n=8,item=15;
//	Step-I
	data[n+1]=item;
//	Step-II
	int loc=1;
//	Step-III
	while(data[loc]!=item){
		loc=loc+1;
	}
//	Step-IV
	if(loc==n+1) 
		cout<<"Search Unsuccesful.";
	else
		cout<<"Item found at location "<<loc;
	return 0;
}
