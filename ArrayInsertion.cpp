#include<iostream>
using namespace std;
int main(){
	char la[10]={'H','I','F','Z','A','G','E'};
	int n=7,k=3;
	cout<<"Array Elements : ";
	for(int i=0; i<10; i++) cout<<la[i]<<"  ";
	int j=n;
	while(j>=k){
		la[j+1]=la[j];
		j--;
	}
	char item='S';
	la[k]=item;
	n=n+1;
	cout<<"\nArray After insertion : ";
	for(int i=0; i<10; i++) cout<<la[i]<<"  ";
	return 0;
}
