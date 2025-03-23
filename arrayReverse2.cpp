#include<iostream>
using namespace std;
int main(){
	cout<<"Enter any 5 values in an array : \n";
	int Qari[5];
	for(int i=0; i<5; i++){
		cin>>Qari[i];
	}
	cout<<"**************FORWARD ARRAY*****************\n";
	for(int i=0; i<5; i++){
		cout<<Qari[i]<<endl;
	}
	cout<<"**************REVERSED ARRAY*****************\n";
	for(int i=4; i>=0; i--){
		cout<<Qar[i]<<endl;
	}
	return 0;
}
