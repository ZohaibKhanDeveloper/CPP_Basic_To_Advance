#include<iostream>
using namespace std;
	void swap(int &x,int &y){
		int t=x;
		x=y;
		y=t;
	}
int main(){
	int n1,n2;
	cout<<"C++ Program that Pass arguments by reference to a function.\n";
	cout<<"----------------------------------------------------------\n";
	cout<<"Enter First number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	swap(n1,n2);
	cout<<"Numbers After function call (Swaped) : \n";
	cout<<"First Number : "<<n1<<endl;
	cout<<"Second Number : "<<n2<<endl;
	cout<<"As we noticed that actual values change in the variables,\n";
	cout<<"Because Arguments passed to the function by reference.";
	return 0;
}
