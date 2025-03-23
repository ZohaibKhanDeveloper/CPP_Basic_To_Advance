#include<iostream>
#include<fstream>
using namespace std;
int main(){
	cout<<"Program that read data from a file and put it on the screen.\n";
	cout<<"-------------------------------------------------------------\n";
	string lines;
	ifstream readData("Data.txt");
	if(!readData){
		cerr<<"File Opening Error.\n";
		exit(1);
	}
	getline(readData,lines);
	cout<<lines;
	return 0;
}
