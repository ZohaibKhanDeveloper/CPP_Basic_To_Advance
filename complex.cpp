#include<iostream>
using namespace std;
int main(){
cout<<"\nProgram that add two complex numbers.\n*******************************************"<<endl;
//TECHI CODER(Z KHAN) : Below varaiables are declared as complexR:complex real number | complexI: complex imaginary.
int complex1R,complex2R,complex1I,complex2I;
char op1,op2;
cout<<"\n*************Taking FIRST Complex Number*************\n\n";
cout<<"Enter the real number of first complex number : ";
cin>>complex1R;
cout<<"Now Enter the operater of the first complex number : ";
cin>>op1;
cout<<"Thats Great!!! Now Enter the Imaginary number of first complex number(without IOTA) : ";
cin>>complex1I;
cout<<"\n*************Taking SECOND Complex Number*************\n\n";
cout<<"Enter the real number of Second complex number : ";
cin>>complex2R;
cout<<"Now Enter the operater of the Second complex number : ";
cin>>op2;
cout<<"Thats Great!!! Now Enter the Imaginary number of Second complex number(without IOTA) : ";
cin>>complex2I;
cout<<"\nYou have Entered the following two complex numbers."<<endl;
cout<<complex1R<<" "<<op1<<" "<<complex1I<<"i"<<endl;
cout<<complex2R<<" "<<op2<<" "<<complex2I<<"i"<<endl;
	if(op1=='+'&&op2=='+'){
   cout<<"Sum : "<<complex1R+complex2R<<"+"<<complex1I+complex2I<<"i";
   }
   else if(op1=='+'&&op2=='-'){
   	if(complex1I<complex2I){
      cout<<"Sum : "<<complex1R+complex2R<<complex1I-complex2I<<"i";
      }
      else{
      cout<<"Sum : "<<complex1R+complex2R<<"+"<<complex1I-complex2I<<"i";
      }
   }
   else if(op1=='-'&&op2=='+'){
   	if(complex2I<complex1I){
      cout<<"Sum : "<<complex1R+complex2R<<complex2I-complex1I<<"i";
      }
      else{
      cout<<"Sum : "<<complex1R+complex2R<<"+"<<complex2I-complex1I<<"i";
      }
   }
   else{
   cout<<"Sum : "<<complex1R+complex2R<<"-"<<complex1I+complex2I<<"i";
   }
cout<<endl;
return 0;
}
