#include<iostream>
using namespace std;
int main(){
	cout<<"Two-Dimensional array lecture practice.\n";
	cout<<"_________________________________________\n";
	char names[3][20]={"Zohaib\0","Ali\0","Akbar\0"};
	int marks[3][6]={
	{99,99,98,95,99,93},
	{98,99,89,96,98,90},
	{90,80,37,32,89,93}	
	};
	for(int i=0; i<3; i++){
		cout<<"\""<<names[i]<<"\" Marks are : \n";
		for(int j=0; j<6; j++){    
			cout<<marks[i][j]<<" | ";
		}
		cout<<"\n-----------------------------\n";
	}
	return 0;
}
