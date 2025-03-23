#include<iostream>  
using namespace std;
void convert_celcius(float*,float*);
int main(){
	float fah,cel;
	cout<<"Passing Pointer as argument to a Function.\n";
	cout<<"Program that convert Fahrenhiet(Temp...) to celcius(Temp...)\n";
	cout<<"------------------------------------------------------------\n";
	cout<<"Enter Temperature in Fahrenhiet : "; cin>>fah;
	convert_celcius(&fah,&cel);
	cout<<"Temperature in celcius is : "<<cel;
}
void convert_celcius(float *f,float *c){
		*c=(*f-32)*5.0/9.0;
	}
