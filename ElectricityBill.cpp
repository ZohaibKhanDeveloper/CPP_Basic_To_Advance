#include<iostream>
using namespace std;
int main(){
	cout<<"Program that Calculate the Electricity Bill of a House.\n";
	float cu,pu,units,bill;
	cout<<"Enter the Current Reading : ";
	cin>>cu;
	cout<<"Enter the Previous reading : ";
	cin>>pu;
	units=cu-pu;
		if(units<=300){
			bill=units*3.0;
		}
		else{
			bill=units*3.5+units*0.05/100.0;
		}
	cout<<"Electricity Bill is : "<<bill;
	return 0;
}
