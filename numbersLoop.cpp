#include<iostream>
using namespace std;
int main(){
	cout<<"Printing Numbers on the loop(Beautiful pattern) : \n";
	int i,j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			cout<<j<<"\t";
		}
		cout<<endl;
	}
}
