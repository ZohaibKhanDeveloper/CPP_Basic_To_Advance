#include<iostream>
using namespace std;
int main(){
	int oddC=0,table[4][4],i,j;
	cout<<"Enter Elements in table in respective position : \n";
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"Row "<<i+1<<" Column "<<j+1<<" integer : ";
			cin>>table[i][j];
		}
	}
	cout<<"Odd numbers in Entered Array Elements are : \n";
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(table[i][j]%2!=0){
				oddC++;
				cout<<table[i][j]<<"\t";
			}
		}
	}
	cout<<"\nTotal odd numbers in table are : "<<oddC; 
	return 0;
}
