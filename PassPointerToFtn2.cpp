#include<iostream>
using namespace std;
void convert_to_kilometer(float *);
int main(){
	float meter,*k_meter;
	k_meter=&meter;
	cout<<"C++ program that pass pointer as an argumnet to the function.\n";
	cout<<"This program will convert meter value to Kilo meter by calling a Function.\n";
	cout<<"--------------------------------------------------------------------\n";
	cout<<"Enter a value (In Meter) : "; cin>>meter;
	cout<<*k_meter<<" m = ";
	convert_to_kilometer(&meter);
	cout<<*k_meter<<" Km.";
}
void convert_to_kilometer(float *m){
	*m/=1000;
}
