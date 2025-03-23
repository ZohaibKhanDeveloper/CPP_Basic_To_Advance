#include<iostream>
using namespace std;
int main(){
	int oddC=0,table[4][4];
	cout<<"Enter Elements in table in respective position : \n";
	for(int i=0; i<4; i++){
		cout<<"Row Number "<<i+1;
		for(int j=0; j<4; j++){
			cout<<" Column Number "<<j+1<<endl;
			cin>>table[i][j];
		}
	}
	return 0;
}
