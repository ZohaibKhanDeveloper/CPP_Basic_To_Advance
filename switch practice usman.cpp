#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	char op;
	cout<<"Enter sub1 Marks: ";cin>>a;
	cout<<"Enter sub2 Marks: "; cin>>b;
	cout<<"Enter Any operator: ";
	cin>>op;
   switch(op){
		case '+':
			c=a+b;
		cout<<"The sum of "<<a<<" & "<<b<<" = "<<c;
			break;
			case'-':
				c=a-b;
			cout<<"The subtraction of "<<a<<" & "<<b<<" = "<<c;
				break;
				default:
					cout<<"Invalid operator";
	 }
	return 0;
}
