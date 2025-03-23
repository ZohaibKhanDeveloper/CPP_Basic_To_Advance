#include<iostream>
using namespace std;
int main(){
	/*From the question and Conditions(PROGRAM 02-09)
	Page No.65 BOOK :  "Aikmen Series of C++".*/
	float basic,ma,ca,net,hr;
	cout<<"Program that calculate the net pay of an Employee.\n";
	cout<<"Enter your Basic pay : ";
	cin>>basic;
		if(basic>5000){
			ma=basic*2/100.0;
			ca=193.0;
		}
		else{
			ma=basic*5.0/100.0;
			ca=96.0;
		}
		hr=basic*45.0/100.0;
		net=basic+ma+ca+hr;
		cout<<"Net Pay : "<<net;
	return 0;	
}
