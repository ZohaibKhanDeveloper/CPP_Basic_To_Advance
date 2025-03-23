#include<iostream>
using namespace std;
int main(){
	cout<<"This program will take the two inputs from the user and then calculate the\n";
	cout<<"SUM, DIFFERENCE, PRODUCT, QUOTIENT, REMAINDER\n";
	cout<<"<<------------------------------------------------------------------------>>\n";
	 float num1,num2,sum,diff,product,quotient;
	 int remainder;
	cout<<"Enter 1st number : "; 
	cin>>num1;
	cout<<"\nNow Enter second number : ";
	cin>>num2;
	sum=num1+num2;
	diff=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	remainder=num1%num2;
	cout<<"Sum of "<<num1<<" and "<<num2<<" = "<<sum<<endl;
	cout<<"Difference of "<<num1<<" and "<<num2<<" = "<<diff<<endl;
	cout<<"Product of "<<num1<<" and "<<num2<<" = "<<product<<endl;
	cout<<"Quotient of "<<num1<<" and "<<num2<<" = "<<quotient<<endl;
	cout<<"Reminder of "<<num1<<" and "<<num2<<" = "<<remainder<<endl;
	return 0;
}
