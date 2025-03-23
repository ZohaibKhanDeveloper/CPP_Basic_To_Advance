#include<iostream>
using namespace std;
int main(){
	int i,j,k,table[4][4];
	cout<<"This program will sort a Table.\n";
	cout<<"Enter random values in the table having 4 rows & 4 columns : \n";
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<"Row "<<i+1<<" Column "<<j+1<<" (Enter Integer) : ";
			cin>>table[i][j];
		}
	}
	k=0;
	while(k<4){
		for(i=0; i<3; i++){
		for(j=i+1; j<4; j++){
			if(table[k][j]<table[k][i]){
				int t=table[k][i];
				table[k][i]=table[k][j];
				table[k][j]=t;
			}
		}
	}
	k++;
	}
	cout<<"--------------------------------------\n";
	cout<<"2D Array After sorting in each Row : \n";
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			cout<<table[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
