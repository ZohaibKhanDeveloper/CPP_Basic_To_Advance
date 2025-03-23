#include<iostream>
using namespace std;
int main(){
	char A[5],B[5],Ut[10];
	cout<<"Simple C++ Program that find the union of 2 sets.\n";
	cout<<"-------------------------------------------------\n";
	cout<<"Enter Set A Elements : \n";
	for(int i=0; i<5; i++){
		cin>>A[i];
		Ut[i]=A[i];
	}
	cout<<"Now Enter Set B Elements : \n";
	for(int i=0,j=5; i<5,j<10; i++,j++){
		cin>>B[i];
		Ut[j]=B[i];
	}
	int index;
	for(int i=0; i<9; i++){ 
		for(int j=i+1; j<10; j++){
			if(Ut[i]==Ut[j]){
				Ut[j]=' ';
			}
		}
	}
	cout<<"A Union B is : { ";
	for(int i=0; i<10; i++){
		if(Ut[i]!=' ')cout<<Ut[i]<<" "; }
   cout<<"}\n";
	return 0;
}
