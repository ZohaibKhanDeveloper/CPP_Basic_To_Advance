#include<iostream>
#include<string.h>
using namespace std;
int main(){
	cout<<"Hello world.";
	string str = "Usman Khan";
	int len=str.length();
	for(int i=len; i>=0; i--){
		cout<<str[i];
	}
//	cout<<endl<<str;
	return 0;
}
