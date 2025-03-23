#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<conio.h>
using namespace std;
int main(){
	char ch;
	cout<<"Enter Characters or type sentences.At the end press ESC key.\n";
	cout<<"-------------------------------------------------------------\n";
	ofstream file("Data.txt");
	if(!file){
		cerr<<"File opening Error\n";
		exit(1);
	}
	//ESC key code is 27
	while(ch!=-122){
		ch=getche();
		file.put(ch);
		if(ch=='\r') cout<<endl;
	}
}
