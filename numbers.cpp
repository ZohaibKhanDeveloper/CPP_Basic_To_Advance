#include<iostream>
using namespace std;
int main(){
	cout<<"Numbers from 1 to 100 using nested loops : \n";
	for(int i=1; i<100; i+=10){
		for(int j=i; j<i+10; j++){
			cout<<j<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
