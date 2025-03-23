#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main(){
	string record;
	int i=1;
	ifstream Studentrecords("students.dat");
	if(!Studentrecords){
		cerr<<"File Opening error."<<endl;
		exit(1);
	}
	cout<<"";
	while(Studentrecords){
		getline(Studentrecords,record);
		cout<<record<<endl;
	}
	return 0;
}

