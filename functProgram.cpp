#include<iostream>
using namespace std;
void table(int, int);
int main(){
	int num,lim;
	cout<<"Enter a Number to make the table of that number : ";
	cin>>num;
	cout<<"Now Enter another number for the limit of the table : ";
	cin>>lim;
	table(num,lim);
	return 0;
}
void table(int a, int b){
	for(int i=1; i<=b; i++){
		cout<<a<<" X "<<i<<" = "<<a*i<<endl;
	}
}
