#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	for(int i=6,space=3; i>=1; space--,i--){
		for(int j=0; j<i; j++){
			cout<<"X";
		}
		cout<<endl;
	}
}
