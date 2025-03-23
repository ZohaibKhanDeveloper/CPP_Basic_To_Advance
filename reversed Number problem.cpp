#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string num;
	cout<<"Enter a number : "; cin>>num;
	int a=num[1];
	a=a/16;
	cout<<a;
	return 0;
}
