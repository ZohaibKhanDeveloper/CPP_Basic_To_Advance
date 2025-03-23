#include<iostream>
using namespace std;
int main(){
	int Table[4][4],max,r,c;
	cout<<"Enter integer values in 4x4 table : \n";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin>>Table[i][j];
		}
	}	
	max=Table[0][0];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(max<Table[i][j]){
				max=Table[i][j];
				r=i; c=j;
			}
		}
	}
	cout<<"Values in the Table : \n";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Table[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Location of Maximum number in table : Table["<<r<<"]"<<"["<<c<<"]\n";
	cout<<"Maximum number in table : "<<max;
}
