#include<iostream>
#include<math.h>
using namespace std;  //Written by Zohaib khan From the Book : (Aikmen Series of C++).
int main(){
	float a,b,c,r1,r2,disc,real,imag;
	cout<<"Program That find the roots of a Quadratic Equation.\n************************************";
	cout<<"\nEnter Value of \"a\" : ";
	cin>>a;
	cout<<"Now Enter Value of \"b\" : ";
	cin>>b;
	cout<<"Now Enter Value of \"c\" : ";
	cin>>c;
	disc=b*b-4.0*a*c;
	cout<<"The Discreminent Value is : "<<disc<<endl;
		if(disc<0){
			real=-b/(2.0*2);
			imag=sqrt(-disc)/(2.0*a);
			cout<<"Roots are Imaginary."<<endl;
			cout<<"Root 1 = "<<real<<"+i("<<imag<<")"<<endl;
			cout<<"Root 2 = "<<real<<"-i("<<imag<<")"<<endl;
		}
		else if(disc==0){
			r1=r2=-b/(2.0*a);
			cout<<"Roots are Real and Equal."<<endl;
			cout<<"Root 1 = "<<r1<<endl;
			cout<<"Root 2 = "<<r2<<endl;
		}
		else{
			cout<<"Roots are Real and Different"<<endl;
			r1=-b/(2.0*a)+sqrt(disc)/(2.0*a);
			r1=-b/(2.0*a)-sqrt(disc)/(2.0*a);
			cout<<"Root 1 = "<<r1<<endl;
			cout<<"Root 2 = "<<r2<<endl;
		}
	return 0;
}
