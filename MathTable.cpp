#include<iostream>
using namespace std;
	int main(){
		int num,limit;
		cout<<"C++ Programm that make the Math table of a number.";
		cout<<"\nEnter any number : ";
		cin>>num;
		cout<<"Now Enter limit number of the table : ";
		cin>>limit;
		for(int i=1; i<=limit; i++){
			cout<<num<<" X "<<i<<" = "<<num*i<<endl;
		}
		return 0;
	}
