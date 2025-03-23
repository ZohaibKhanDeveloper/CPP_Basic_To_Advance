#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n1,n2,n3;
	ofstream sum("sum.dat");
	ifstream numbers("numbers.txt");
	if(!sum){
		cerr<<"File Opening error. (writing)";
		exit(1);
	}
	if(!numbers){
		cerr<<"File Opening error.(Reading)";
		exit(1);
	}
	numbers>>n1>>n2>>n3;
	while(numbers){
		sum<<n1<<"\t"<<n2<<"\t"<<n3<<"\t"<<(n1+n2+n3)<<endl;
		numbers>>n1>>n2>>n3;
	}
	return 0;
}
