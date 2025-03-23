#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"Enter a character to check the gender(m/f) : ";
	cin>>a;
	if(a=='m'||a=='M'){
		cout<<"You are male.";
	}
	else if(a=='f'||a=='F'){
		cout<<"You are female.";
	}
	else{
		cout<<"Character did'nt Matched.";
	}
	cout<<endl;
}
